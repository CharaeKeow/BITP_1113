#include <iostream>
using namespace std;

void printNum(int num); //for loop to print  0 - 10, because repetition is boring

void printNum(int num) {
	for (int i = 0; i <= 10; i++) {
		cout << " " << i << " ";
	}
}


int main() {
	
	cout << "10" << endl;
	cout << " 9" << endl;
	cout << " 8" << endl;
	cout << " 7\t\t   x" << endl;
	cout << " 6  x" << endl;
	cout << " 5\t\t\t\tx" << endl;
	cout << " 4     x" << endl;
	cout << " 3\t\t\t x" << endl;
	cout << " 2\t  x" << endl;
	cout << " 1  x" << endl;
	printNum(10); 

	return 0;
}
