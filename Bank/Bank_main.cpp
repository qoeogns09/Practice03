#include <iostream>
#include <cstring>
#include "Bank.h"

using namespace std;

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};


int main() {
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "¼±ÅÃ: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
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
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}
