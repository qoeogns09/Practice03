#include<iostream>
#include<cstring>
#include "Bank.h"

using namespace std;
const int NAME_LEN = 20;
typedef struct {
	int accID;
	int balance;
	char cusName[NAME_LEN];
} Account;

Account accArr[100];
int accNum = 0;

void ShowMenu() {
	cout << "-----Menu-----" << endl;
	cout << ";1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이 름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney(){
	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	}

void WithdrawMoney() {
	int money;
	int id;
	cout << "[출 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			if (accArr[i].balance < money) {
				cout << "잔액부족" << endl << endl;
				return;
			}
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이 름: " << accArr[i].cusName << endl;
		cout << "잔 액: " << accArr[i].balance << endl << endl;
	}
}