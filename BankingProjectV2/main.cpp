#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    UserAccount ua;                         //create a new UserAccount object named ua

    MainWindow mw;                          //create a new MainWindow object called mw
    mw.show();                              //call the show(); function for the MainWindow object mw

    /*
    //UPDATE WINDOW DATA
    mw.updateWindowData(ua.getUsercBal(), ua.getUsersBal(), ua.getUseroverDraft(), ua.getUseruserName());       //sets the Checking/Savings labels to display the values of the UserAccount class's cBal/sBal
                                                                                                                //also stores UserAccount class's cBal/sBal/overDraft/userName in local variables mwcBal/mwsBal/mwoverDraft/mwuserName
    */

    //UPDATE WINDOW DATA V2
    mw.updateWindowDataV2(ua);              //Does all that stuff above, but much cleaner

    ua.setUsercBal(0.01);                   //Here original UserAccount cBal value of 222.00 is set to 0.01
    ua.depositUsercBal(0.02);               //Here UserAccount cBal value is += 0.02, thus making it 0.03
    mw.updateWindowDataV2(ua);              //MainWindow funds labels refreshed to display changes

    //mw.depositUsercBal(0.02);





    //NO LONGER RELEVANT
    /*
    mw.makeCDeposit(ua.getUsercBal());      //TEST deposit the checking balance from the user class, into the checking balance of the mainwindow
    mw.makeSDeposit(ua.getUsersBal());

    double oneCent = 0.01;

    mw.makeCDeposit(oneCent);               //increase mw's (a MainWindow class object) private member variable cBal by the value of parameter taken in. In this case the parameter oneCent has the value of 0.01
                                            //also updates the label on mw for displaying the cBal
    mw.makeCDeposit(oneCent);               //therefore: mw.cBal += oneCent, mw.labelcBal

    mw.makeSDeposit(oneCent);               //conducts the same above but for the sBal and labelsBal
    */

    return a.exec();
}
