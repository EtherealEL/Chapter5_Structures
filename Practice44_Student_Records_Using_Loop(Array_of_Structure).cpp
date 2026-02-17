
#include <iostream>
using namespace std;

struct Students
{
	int roll_number;
	char name[50];
	float marks;
};





int main()
{
	Students student_1[3];


		cout << "\n\t\t\tStudent records Program\n";

	for (int index = 0; index < 3; index++)
	{

		//get input

		cout << "\n\tEnter information for student " << (index + 1) << ": ";
		cout << "\n\nEnter roll #:";

		cin >> student_1[index].roll_number;

		cin.ignore();//use cin.ignore() before using getline

		cout << "\nEnter student's name: ";
		cin.getline(student_1[index].name, 50);

		cout << "\nEnter student's grade: ";
		cin >> student_1[index].marks;

	}

	//print that info :D


	cout << "\n\n\t\tStudent Info table";
	cout << "\n\t_____________________________\n";

	for (int index = 0; index < 3; index++)
	{
		cout << "\nStudent " << (index + 1) << " info";
		cout << "\nRoll #: " << student_1[index].roll_number;

		cout << "\nName: " << student_1[index].name;
		cout << "\nGrade: " << student_1[index].marks << "%";

	}
	return 0;

}

