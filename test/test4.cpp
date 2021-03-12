#include<iostream>

using namespace std;

const int num = 12;
const int* ptr = &num;

int main() {
	cout << num << endl;
	cout << *ptr << endl;

}