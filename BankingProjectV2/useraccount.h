#ifndef USERACCOUNT_H
#define USERACCOUNT_H
#include <QString>



class UserAccount
{
public:
    UserAccount();
    ~UserAccount();
    double getUsercBal();
    double getUsersBal();

private:
    QString userName;
    QString userPassword;
    double cBal = 222.00;
    double sBal = 0.00;
    double overDraft = 25.00;

};

#endif // USERACCOUNT_H
