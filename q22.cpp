#include<iostream>
using namespace std;
int total = 500;
void deposit(int* amount, int size) {
	int deposit;
	int customer;
	cout << "enter customer number";
	cin >> customer;

	if (customer <= size) {

		cout << "enter amount you want to deposit";
		cin >> deposit;
		total += deposit;
		cout << "amount deposit succfully";
	}

}
int withdraw(int*amount,int size){
	int deposit;
	int customer;
	cin >> customer;
	if (deposit > total){
		cout << "insufficient balance"; 


	}
	else {
		total = total - deposit;
	}
	return total;

}
int main() {
	int choice;
	cout << "enter choice";
	cin >> choice;
	int* array, size;
	cout << "enter size";
	cin >> size;
	array = new int[size];
	int depositt;
	cout << "enter amount to deposit";
	cin >> depositt;
	for (int i = 0; i < size; i++) {




		do {
			cout << "1=deposit";
			cout << "2-withdraw";
			cout << "3-exit";
		} while (choice != 3);
		if (choice == 1) {
			deposit(array, size);


		}
		else if (choice == 2) {
			withdraw(array, size);
		}
		else if (choice == 3) {
			cout << "exit";
		}
	}
	system("pause");
}