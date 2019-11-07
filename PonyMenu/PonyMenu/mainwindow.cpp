#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Windows.h>
#include <QMessageBox>
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <Windows.h>
#include "proc.h"
#include "mem.h"
#include "omp.h"
#include <QPixmap>


// global variables

HANDLE hProcess = 0;
uintptr_t moduleBase, firstLevelPtr, manaAddr, healthAddr, speedAddr, jumpAddr, fireAddr = 0;
bool bMana, bHealth, bSpeed, bJump, bFire, activeTrainer = false;

const int newMana = 1337;
const int newHealth = 420;
const int defaultMana = 100;
const int defaultHealth = 100;
const float newSpeed = 1000;
const float defaultSpeed = 200;
const float newJump = 2000;
const float defaultJump = 420;
char newFire[] = { 0xB8, 0xDC, 0x05, 0x00, 0x00 };
char defaultFire[] = { 0xB8, 0x19, 0x00, 0x00, 0x00 };


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	QPixmap pix("C:/Users/t_bal/source/repos/PonyMenu/PonyMenu/OSU.png");
	ui->label_picture->setPixmap(pix.scaled(300, 261, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_jumpButton_pressed()
{	
	if (activeTrainer == true && bJump == false)
	{
		mem::PatchEx((BYTE*)jumpAddr, (BYTE*)&newJump, sizeof(newJump), hProcess);
		ui->jumpLabel->setText("ON");
		bJump = !bJump;
	}
	else if (activeTrainer == true && bJump == true)
	{
		mem::PatchEx((BYTE*)jumpAddr, (BYTE*)&defaultJump, sizeof(newJump), hProcess);
		ui->jumpLabel->setText("OFF");
		bJump = !bJump;
	}
	else
		QMessageBox::information(this, "error", "No active trainer, did you start link the trainer with the start button?");
}

void MainWindow::on_speedButton_pressed()
{
	if (activeTrainer == true && bSpeed == false)
	{
		mem::PatchEx((BYTE*)speedAddr, (BYTE*)&newSpeed, sizeof(newSpeed), hProcess);
		ui->speedLabel->setText("ON");
		bSpeed = !bSpeed;
	}
	else if (activeTrainer == true && bSpeed == true)
	{
		mem::PatchEx((BYTE*)speedAddr, (BYTE*)&defaultSpeed, sizeof(newSpeed), hProcess);
		ui->speedLabel->setText("OFF");
		bSpeed = !bSpeed;
	}
	else
		QMessageBox::information(this, "error", "No active trainer, did you start link the trainer with the start button?");
}

void MainWindow::on_healthButton_pressed()
{
	if (activeTrainer == true && bHealth == false)
	{
		mem::PatchEx((BYTE*)healthAddr, (BYTE*)&newHealth, sizeof(newHealth), hProcess);
		ui->healthLabel->setText("ON");
		bHealth = !bHealth;
	}
	else if (activeTrainer == true && bHealth == true)
	{
		mem::PatchEx((BYTE*)healthAddr, (BYTE*)&defaultHealth, sizeof(newHealth), hProcess);
		ui->healthLabel->setText("OFF");
		bHealth = !bHealth;
	}
	else
		QMessageBox::information(this, "error", "No active trainer, did you start link the trainer with the start button?");
}

void MainWindow::on_manaButton_pressed()
{
	if (activeTrainer == true && bMana == false)
	{
		mem::PatchEx((BYTE*)manaAddr, (BYTE*)&newMana, sizeof(newMana), hProcess);
		ui->manaLabel->setText("ON");
		bMana = !bMana;
	}
	else if (activeTrainer == true && bMana == true)
	{
		mem::PatchEx((BYTE*)manaAddr, (BYTE*)&defaultMana, sizeof(newMana), hProcess);
		ui->manaLabel->setText("OFF");
		bMana = !bMana;
	}
	else
		QMessageBox::information(this, "error", "No active trainer, did you start link the trainer with the start button?");
}

void MainWindow::on_fireButton_pressed()
{
	if (activeTrainer == true && bFire == false)
	{
		mem::PatchEx((BYTE*)fireAddr, (BYTE*)&newFire, sizeof(newFire), hProcess);
		ui->fireLabel->setText("ON");
		bFire = !bFire;
	}
	else if (activeTrainer == true && bFire == true)
	{
		mem::PatchEx((BYTE*)fireAddr, (BYTE*)&defaultFire, sizeof(newFire), hProcess);
		ui->fireLabel->setText("OFF");
		bFire = !bFire;
	}
	else
		QMessageBox::information(this, "error", "No active trainer, did you start link the trainer with the start button?");
}


void MainWindow::on_startButton_pressed()
{

	DWORD procId = GetProcId(L"PwnAdventure3-Win32-Shipping.exe");

	if (procId)
	{
		//get the base address of process PwnAdventure3-Win32-Shipping.exe
		moduleBase = GetModuleBaseAddress(procId, L"GameLogic.dll");							

		//add relative offset to get the first level pointer
		firstLevelPtr = moduleBase + 0x00097D7C;												
		
		//need to use PROCESS_ALL_ACCESS for GetExitCodeProcess
		hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procId);

		// determine dynamic addresses based off of static pointers
		manaAddr = FindDMAAddy(hProcess, firstLevelPtr, { 0x1c, 0x6c, 0xbc });
		healthAddr = FindDMAAddy(hProcess, firstLevelPtr, { 0x1c, 0x6c, 0x00 }) - 0x40;
		speedAddr = FindDMAAddy(hProcess, firstLevelPtr, { 0x1c, 0x6c, 0x120 });
		jumpAddr = FindDMAAddy(hProcess, firstLevelPtr, { 0x1c, 0x6c, 0x124 });
		fireAddr = moduleBase + 0x0000D7E0;

		activeTrainer = true;

	}
	else
	{
		//if pwn adventure process is not found, exit
		QMessageBox::information(this, "error", "Cannot find target process");
	}
}

void MainWindow::on_exitButton_pressed()
{
	activeTrainer = false;
	QCoreApplication::quit();
}