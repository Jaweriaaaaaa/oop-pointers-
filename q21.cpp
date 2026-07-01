#include<iostream>
using namespace std;
void inputcharges(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
}
int highestcharge(int* arr, int size) {
	int largest = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) > largest) {
			largest = *(arr + i);
		}
	}
	return largest;
}
double average(int* arr, int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += *(arr + i);

	}
	double avg = total / size;
	return avg;

}
int increase(int* arr, int size) {
	int bill = 0;
	for (int i = 0; i < size; i++) {
		bill= *(arr + i)+10;
	}
	return bill;
}
int main() {
	int* array, size;
	cout << "enter size";
	cin >> size;
	array = new int[size];
	inputcharges(array, size);
	int result=highestcharge(array, size);
	cout << "highest charge is" << result;
	double answer=average(array, size);
	cout << "avg is:" << answer;
	int ans=increase(array, size);
	cout << "updated bill is:" << ans;
	system("pause");

	
}