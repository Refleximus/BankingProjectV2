#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//#include <QMainWindow>
#include "useraccount.h"

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

    //UPDATE WINDOW DATA
    void updateWindowData(double, double, double, QString);

    //UPDATE WINDOW DATA V2
    void updateWindowDataV2(UserAccount&);

    //NO LONGER RELEVANT
/*
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
*/

private slots:


    //NO LONGER FUNCTION
    /*
    //PROGRAMMER TOOL BUTTONS=======================
    void on_pushButtonPTDepositChecking_clicked();



    void on_pushButtonPTWithdrawChecking_clicked();

    void on_pushButtonPTDepositSavings_clicked();

    void on_pushButtonPTWithdrawSavings_clicked();
    //==============================================
    */

    //THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!
    //THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!
    //NEW TEST FOR MAINWINDOW BUTTONS:
    //============================================
    void on_pushButtonPTDepositChecking_clicked(UserAccount&);
    //============================================
    //THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!
    //THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!

    void on_pushButtonLogout_clicked();

private:
    Ui::MainWindow *ui;

    double mwcBal = 0.00;
    double mwsBal = 0.00;
    double mwoverDraft = 0.00;
    QString mwuserName;

    friend class UserAccount;

};

#endif // MAINWINDOW_H
