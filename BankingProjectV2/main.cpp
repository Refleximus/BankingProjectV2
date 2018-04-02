#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mw;                          //create a new MainWindow object called mw;
    mw.show();                              //call the show(); function for the MainWindow object mw;


    double oneCent = 0.01;

    mw.makeCDeposit(oneCent);               //increase mw's (a MainWindow class object) private member variable cBal by the value of parameter taken in. In this case the parameter oneCent has the value of 0.01;
                                            //also updates the label on mw for displaying the cBal;
    mw.makeCDeposit(oneCent);               //therefore: mw.cBal += oneCent, mw.labelcBal

    mw.makeSDeposit(oneCent);               //conducts the same above but for the sBal and labelsBal;

    UserAccount ua;
    mw.makeCDeposit(ua.getUsercBal());      //TEST deposit the checking balance from the user class, into the checking balance of the mainwindow





    return a.exec();
}
