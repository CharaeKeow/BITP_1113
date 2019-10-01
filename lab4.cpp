#include <iostream>
#include <string>
using namespace std;

void details (string name, string address, string department) {
	cout << "Name: \n" << name << endl;
	cout << "Address: \n" << address << endl;
	cout << "Department: \n" << department << endl;
}

void tq() { //display thank you message
	cout << "Thank you!" << endl;
}

void call2action() {
	cout << "Please come back later" << endl;
}

int main()
{
	details("Charae a/L Eh Sin", "Lot 2800 Kampung Binjal,\n16200 Tumpat\nKelantan", "FTMK");
	cout << "\n\n";
	tq();
	call2action();
    return 0;
}
