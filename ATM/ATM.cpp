#include <iostream>
using namespace std;

void showMenu() {
	cout << "***********MENU***********\n";
	cout << "1. Check Balance\n";
	cout << "2. Deposit\n";
	cout << "3. Withdraw\n";
	cout << "4. Exit\n";
	cout << "**************************\n";
	
}

int main() {
	int option;
	double balance = 250;

	do
	{
		showMenu();
		cout << "Choose between options [1-4]: ";
		cin >> option;
		system("cls");
		switch (option) {
		case 1:
			cout << "Balance is: $" << balance << endl; break;
		case 2:
			cout << "Deposit amount: $";
			double depositAmnt;
			cin >> depositAmnt;
			balance += depositAmnt;
			cout << "Your balance is now: $" << balance << endl;
			break;
		case 3:
			cout << "Withdraw amount: $";
			double withdrawAmnt;
			cin >> withdrawAmnt;
			if (withdrawAmnt > balance) {
				cout << "Sorry, the amount of balance is less the amount of withdraw, please try again.\n";
			}
			else {
				balance -= withdrawAmnt;
				cout << "Your balance is now: $" << balance << endl;
			}

			break;
		}
	} while (option != 4);
}