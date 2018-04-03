#ifndef USERACCOUNT_H
#define USERACCOUNT_H
#include <QMainWindow>
#include <QString>

//#include "mainwindow.h"

class UserAccount //: public MainWindow         //THIS WOULD ALLOW ME TO ACCESS THE FUNCTIONS OF MAINWINDOW CLASS WITHIN USERACCOUNT FUNCTIONS - but requires #include "mainwindow.h" which throws off #ifndef
{
public:
    UserAccount();
    ~UserAccount();

    void setUsercBal(double);
    void setUsersBal(double);
    void setUseroverDraft(double);


    double getUsercBal();
    double getUsersBal();
    double getUseroverDraft();

    QString getUseruserName();

    void depositUsercBal(double);

private:
    QString userName = "Dirksoul";
    QString userPassword = "password123";
    double cBal = 222.00;
    double sBal = 111.00;
    double overDraft = 25.00;

    friend class MainWindow;

};

#endif // USERACCOUNT_H
