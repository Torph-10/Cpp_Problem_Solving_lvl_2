#include <iostream>
using namespace std;

void read_user_info(int &age, bool &driver_license)
{
	cout << "Please enter your age ?" << endl;
	cin >> age;
	cout << "Please enter 1 if you have or 0 of you don't have driver_license ?" << endl;
	cin >> driver_license;
}

void check_and_print(int age, bool driver_license)
{
	if (age >= 21 && driver_license == 1)
		cout << "Hired" << endl;
	else 
		cout << "Rejected" << endl;
}
int main()
{
	int age;
	bool driver_license;

	read_user_info(age, driver_license);
	check_and_print(age, driver_license);
	return(0);
} 