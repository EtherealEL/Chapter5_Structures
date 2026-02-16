
#include <iostream>
using namespace std;

struct Book
{
	int book_id;
	char title[50];
	float price;
};

int main()
{

	Book book1;

	cout << "Enter book ID: ";
	cin >> book1.book_id;

	cin.ignore();


	cout << "Enter book title: ";
	cin.getline(book1.title, 50);

	cout << "Enter book price: ";
	cin >> book1.price;


	cout << "\n~~~~Library info~~~~\n\n";
	cout << "Book ID: " << book1.book_id << endl;
	cout << "Book Title: " << book1.title << endl;
	cout << "Book price: $" << book1.price << endl;

	return 0;


}

