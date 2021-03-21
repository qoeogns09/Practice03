#ifndef __BANK_H_
#define __BANK_H_

#include<iostream>
#include<cstring>

using namespace std;
const int NAME_LEN=20;

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

enum {LEVEL_A=7, LEVEL_B=4, LEVEL_C=2};

enum {NORMAL =1, CREDIT=2};

class Account{
    private:
        int accID;
        int balance;
        char *cusName;
    public:
        Account(int ID, int money, const char *name);
        Account(const Account &copy);

        int GetAccID() const;
        virtual void Deposit(int money);
        int Withdraw(int money);
        void ShowAccInfo() const;
        ~Account();
};


Account::Account(int ID, int money, const char *name): accID(ID), balance(money){
    cusName= new char[strlen(name)+1];
     strcpy(cusName, name);
}
Account::Account(const Account &copy): accID(copy.accID), balance(copy.balance){
    cusName = new char[strlen(copy.cusName)+1];
    strcpy(cusName, copy.cusName);
}
int Account::GetAccID() const {return accID; }
void Account::Deposit(int money){
    balance+=money;
}
int Account::Withdraw(int money){
    if(balance<money)
        return 0;

    balance-=money;
    return money;
}
void Account::ShowAccInfo() const {
    cout<<"°èÁÂID: "<<accID<<endl;
    cout<<"ÀÌ ¸§: "<<cusName<<endl;
    cout<<"ÀÜ ¾×: "<<balance<<endl;
}
Account::~Account(){
    delete []cusName;
}


class NormalAccount: public Account
{
    private:
        int interRate;
    public:
        NormalAccount(int ID, int money, const char* name, int rate): Account(ID, money, name), interRate(rate){}
        virtual void Deposit(int money)
        {
            Account::Deposit(money);
            Account::Deposit(money*(interRate/100.0));
        }
};

class HighCreditAccount : public NormalAccount
{
    private:
        int specialRate;
    public:
        HighCreditAccount(int ID, int money, char* name, int rate, int special): NormalAccount(ID, money, name, rate), specialRate(special){}
        virtual void Deposit(int money)
        {
            NormalAccount::Deposit(money);
            Account::Deposit(money*(specialRate/100.0));
        }
};

#endif