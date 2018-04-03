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

void MainWindow::updateWindowDataV2(UserAccount& useraccount)
{
    mwcBal = useraccount.cBal;
    mwsBal = useraccount.sBal;
    mwuserName = useraccount.userName;
    mwoverDraft = useraccount.overDraft;
    ui->labelcBal->setNum(useraccount.cBal);
    ui->labelsBal->setNum(useraccount.sBal);
    ui->labeluserName->setText(useraccount.userName);
}


//OBSOLETE NOW
void MainWindow::updateWindowData(double usercBal, double usersBal, double useroverDraft, QString useruserName)
{
    mwcBal = usercBal;
    mwsBal = usersBal;
    mwuserName = useruserName;
    mwoverDraft = useroverDraft;
    ui->labelcBal->setNum(usercBal);
    ui->labelsBal->setNum(usersBal);
    ui->labeluserName->setText(useruserName);
}


//NO LONGER RELEVANT
/*
//=====================================================================================
//========================= CHECKING BALANCE MATH =====================================
//GENERIC
void MainWindow::setLabelcBal()                                     //update the label labelcBal on MainWindow object to display cBal
{
    ui->labelcBal->setNum(mwcBal);
}
//DEPOSIT
void MainWindow::depositChecking(double deposit)                    //increase the value of cBal by the value of deposit
{
    mwcBal += deposit;
}
void MainWindow::makeCDeposit(double deposit)                       //calls the depositChecking and setLabelCBal functions
{
    this->depositChecking(deposit);
    this->setLabelcBal();
}
//WITHDRAW
void MainWindow::withdrawChecking(double withdraw)                  //reduce the value of cBal by the value of withdraw
{
    mwcBal -= withdraw;
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
    ui->labelsBal->setNum(mwsBal);
}
//DEPOSIT
void MainWindow::depositSavings(double deposit)                  //increase the value of sBal by the value of deposit
{
    mwsBal += deposit;
}
void MainWindow::makeSDeposit(double deposit)                    //calls the depositChecking and setLabelSBal functions
{
    this->depositSavings(deposit);
    this->setLabelsBal();
}
//WITHDRAW
void MainWindow::withdrawSavings(double withdraw)               //reduce the value of sBal by the value of withdraw
{
    mwsBal -= withdraw;
}
void MainWindow::makeSWithdraw(double withdraw)                 //calls the withdrawSavings and setLabelSBal functions
{
    this->withdrawSavings(withdraw);
    this->setLabelsBal();
}
//=====================================================================================
//=====================================================================================
*/



//=====================================================================================
//=========================== MAINWINDOW BUTTONS ======================================
void MainWindow::on_pushButtonLogout_clicked()                  //logout button -> closes mainwindow object
{
    close();
}
//=====================================================================================
//=====================================================================================




//NOW BROKEN NEED TO FIND HOW TO ACESS UserAccount's current class object's members from this class
//Something like... Button on MainWindow object sends number value to UserAccount object, UserAccount object updates money value variable, UserAccount object tells MainWindow object to update label displaying money value
//==========================================================================
//======================= PROGRAMMER TOOLS =================================
/*
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
*/

//THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!
//THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!
//NEW TEST FOR MAINWINDOW BUTTONS:
//============================================
void MainWindow::on_pushButtonPTDepositChecking_clicked(UserAccount& useraccount)
{
    useraccount.depositUsercBal(1);
    updateWindowDataV2(useraccount);
    //how do I tell this function of this MainWindow object (mw) which UserAccount object (ua) I wish to pass into this function
    //so that the function ua.depositUsercBal(1), is called.
}
//============================================
//THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!
//THIS IS WHERE I NEED HELP!!!!!!!!!!!!!!!!

//==========================================================================
//==========================================================================




