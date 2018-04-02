#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//=====================================================================================
//========================= CHECKING BALANCE MATH =====================================
//GENERIC
void MainWindow::setLabelcBal()                                     //update the label labelcBal on MainWindow object to display cBal
{
    ui->labelcBal->setNum(cBal);
}
//DEPOSIT
void MainWindow::depositChecking(double deposit)                    //increase the value of cBal by the value of deposit
{
    cBal += deposit;
}
void MainWindow::makeCDeposit(double deposit)                       //calls the depositChecking and setLabelCBal functions
{
    this->depositChecking(deposit);
    this->setLabelcBal();
}
//WITHDRAW
void MainWindow::withdrawChecking(double withdraw)                  //reduce the value of cBal by the value of withdraw
{
    cBal -= withdraw;
}
void MainWindow::makeCWithdraw(double withdraw)                     //calls the withdrawChecking and setLabelCBal functions
{
    this->withdrawChecking(withdraw);
    this->setLabelcBal();
}
//=====================================================================================
//=====================================================================================



//=====================================================================================
//========================= SAVINGS BALANCE MATH ======================================
//GENERIC
void MainWindow::setLabelsBal()                                  //update the label labelcBal on MainWindow object to display cBal
{
    ui->labelsBal->setNum(sBal);
}
//DEPOSIT
void MainWindow::depositSavings(double deposit)                  //increase the value of sBal by the value of deposit
{
    sBal += deposit;
}
void MainWindow::makeSDeposit(double deposit)                    //calls the depositChecking and setLabelSBal functions
{
    this->depositSavings(deposit);
    this->setLabelsBal();
}
//WITHDRAW
void MainWindow::withdrawSavings(double withdraw)               //reduce the value of sBal by the value of withdraw
{
    sBal -= withdraw;
}
void MainWindow::makeSWithdraw(double withdraw)                 //calls the withdrawSavings and setLabelSBal functions
{
    this->withdrawSavings(withdraw);
    this->setLabelsBal();
}
//=====================================================================================
//=====================================================================================



//=====================================================================================
//=========================== MAINWINDOW BUTTONS ======================================
void MainWindow::on_pushButtonLogout_clicked()                  //logout button -> closes mainwindow object
{
    close();
}
//=====================================================================================
//=====================================================================================



//**************************************************************************
//*********************** PROGRAMMER TOOLS *********************************
void MainWindow::on_pushButtonPTDepositChecking_clicked()
{
    makeCDeposit(1);
}
void MainWindow::on_pushButtonPTWithdrawChecking_clicked()
{
    makeCWithdraw(1);
}
void MainWindow::on_pushButtonPTDepositSavings_clicked()
{
    makeSDeposit(1);
}
void MainWindow::on_pushButtonPTWithdrawSavings_clicked()
{
    makeSWithdraw(1);
}
//**************************************************************************
//**************************************************************************



