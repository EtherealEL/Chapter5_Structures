#include <iostream>
using namespace std;

struct Cart
{
	int product_id;
	char product_name[50];
	float product_price;
	int quantity;
};





int main()
{
	Cart cart[5];
	float bill_total = 0.0;

	for (int index = 0; index < 5; index++)
	{
		cout << "\nEnter product details for product " << (index + 1) << endl;

		cout << "\nProduct ID#: ";
		cin >> cart[index].product_id;

		cin.ignore();

		cout << "\nProduct name: ";
		cin.getline(cart[index].product_name, 50);

		cout << "\nPrice: ";
		cin >> cart[index].product_price;

		cout << "\nQuantity: ";
		cin >> cart[index].quantity;
	}

	//display 

	cout << "\n\t ~~ Shopping Cart Customer Information ~~ \n";

	for (int index = 0; index < 5; index++)
	{

		float individual_cost = cart[index].product_price * cart[index].quantity;
		bill_total += individual_cost;

		cout << "\tProduct ID#: " << cart[index].product_id << endl;
		cout << "\tName of Product: " << cart[index].product_name << endl;
		cout << "\tProduct Cost: " << individual_cost << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~\n\n";

	}

	cout << "\tCart Total: " << bill_total << endl;

	return 0;

}