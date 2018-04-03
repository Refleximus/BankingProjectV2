#include "mainwindow.h"

UserAccount::UserAccount(){}

UserAccount::~UserAccount(){}

//SETTERS FOR USERACCOUNT
void UserAccount::setUsercBal(double valueToSet)
{
    this->cBal = valueToSet;
}

void UserAccount::setUsersBal(double valueToSet)
{
    this->sBal = valueToSet;
}

void UserAccount::setUseroverDraft(double valueToSet)
{
    this->overDraft = valueToSet;
}

//GETTERS FOR USERACCOUNT
double UserAccount::getUsercBal()           //Return the value held within UserAccount.cBal
{
    return this->cBal;
}

double UserAccount::getUsersBal()           //Return the value held within UserAccount.sBal
{
    return this->sBal;
}

double UserAccount::getUseroverDraft()      //Return the value held within UserAccount.overDraft
{
    return this->overDraft;
}

QString UserAccount::getUseruserName()
{
    return this->userName;
}

//USERACCOUNT FUND MANIPULATION
void UserAccount::depositUsercBal(double deposit)
{
    this->cBal += deposit;
}
