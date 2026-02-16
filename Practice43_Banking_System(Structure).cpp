
#include <iostream>
using namespace std;



struct Bank
{
	int acc_num;
	char name[50];
	float balance;
};


int main()
{
	Bank bank_1;

	cout << "Welcome to Oscar Bank, \nEnter your bank information as the prompts appear on the screen\n\n";


	cout << "Enter your 5 digit account number:";
	cin >> bank_1.acc_num;

	cin.ignore();

	cout << "Enter the name attatched to your account: ";
	cin.getline(bank_1.name, 50);


	cout << "Enter your account balance:";
	cin >> bank_1.balance;


	cout << "\n_______" << bank_1.name << "'s Account______\n" << "\t___________________\n";
	cout << "\tAccount #:" << bank_1.acc_num << endl;
	cout << "\tAccount Balance: $" << bank_1.balance << endl;
	cout << "\tThank you!";

	return 0;
}

