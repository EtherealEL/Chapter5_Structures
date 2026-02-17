
#include <iostream>
using namespace std;

struct Hospital
{
	int patient_id;
	char patient_name[50];
	float body_temp;
};




int main()
{

	Hospital hospital[5];


	for (int index = 0; index < 5; index++)
	{

		cout << "\nEnter Patient " << (index + 1) << "'s Information:\n\n";
		cout << "Patient ID: ";
		cin >> hospital[index].patient_id;

		cin.ignore();

		cout << "\nPatients Name: ";
		cin.getline(hospital[index].patient_name, 50);

		cout << "\nPatient's Body Temp: ";
		cin >> hospital[index].body_temp;



	}

	//display
			cout << "\n\n\t\tPatient Records";

	for (int index = 0; index < 5; index++)
	{

		cout << "\nPatient " << (index + 1) << "'s ID#: " << hospital[index].patient_id;
		cout << "\nPatient " << (index + 1) << " 's name: " << hospital[index].patient_name;
		cout << "\nPatient " << (index + 1) << "'s body temp: " << hospital[index].body_temp;

	}
	return 0;
}
