//Instead of typing each star one by one, why not doing it a hard
//way using a function.

#include <iostream>
using namespace std;

void printStar(int n);

void printStar(int n) {
	for (int i = 0; i <= n; i++) {
		cout << "*";
	}
}

int main() {
	printStar(29);
	cout << "\n";
	printStar(5);
	cout << "\t    UTEM  \t";
	printStar(5);
	cout << "\n";
	printStar(29);

	return 0;
}
