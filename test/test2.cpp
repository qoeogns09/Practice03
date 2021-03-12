#include <iostream>

using namespace std;

int plus1(int *num) {
	return *num + 1;
}

int inv1(int &num) {
	return num * (-1);
}

int main() {
	int a = 5;
	cout << plus1(&a) << endl;
	cout << inv1(a) << endl;
}