#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "useraccount.h"
#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);   //MainWindow class is declared
    ~MainWindow();

//==== CHECKING MATH PROTOTYPES ====
    //GENERIC
    void setLabelcBal();

    //DEPOSIT
    void depositChecking(double);
    void makeCDeposit(double);

    //WITHDRAW
    void withdrawChecking(double);
    void makeCWithdraw(double);
//==================================


//==== CHECKING MATH PROTOTYPES ====
    //GENERIC
    void setLabelsBal();

    //DEPOSIT
    void depositSavings(double);    
    void makeSDeposit(double);

    //WITHDRAW
    void withdrawSavings(double);
    void makeSWithdraw(double);
//==================================



private slots:

    //PROGRAMMER TOOL BUTTONS=======================
    void on_pushButtonPTDepositChecking_clicked();

    void on_pushButtonPTWithdrawChecking_clicked();

    void on_pushButtonPTDepositSavings_clicked();

    void on_pushButtonPTWithdrawSavings_clicked();
    //==============================================

    void on_pushButtonLogout_clicked();

private:
    Ui::MainWindow *ui;

    double cBal = 0.00;
    double sBal = 0.00;
    double overDraft = 25.00;

};

#endif // MAINWINDOW_H
