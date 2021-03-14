#include "Bank.h"
#include "Bank.cpp"

int main(void){
    int choice;

    while(1){
        ShowMenu();
        cout<<"¼±ÅÃ: ";
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
        case MAKE:
            MakeAccount();
            break;
        case DEPOSIT:
            DepositMoney();
            break;
        case WITHDRAW:
            WithdrawMoney();
            break;
        case INQUIRE:
            ShowAllAccInfo();
            break;
        case EXIT:
            for(int i=0; i<accNum; i++)
                delete accArr[i];
            return 0;
        default:
            cout<<"Illegal selection.."<<endl;
        }
    }

    return 0;
}