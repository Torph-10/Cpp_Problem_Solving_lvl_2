#include <iostream>
using namespace std;

void read_user_info(int& age, bool& driver_license, bool &recomm)
{
	cout << "Please enter your age ?" << endl;
	cin >> age;
	cout << "Please enter 1 if you have or 0 of you don't have driver_license ?" << endl;
	cin >> driver_license;
	cout << "Please enter 1 if you have or 0 of you don't have Recommendation ?" << endl;
	cin >> recomm;
}

void check_and_print(int age, bool driver_license, bool recomm)
{
	if (recomm == 1)
	{
		cout << "Hired" << endl;
		return;
	}
	else if (age >= 21 && driver_license == 1)
		cout << "Hired" << endl;
	else
		cout << "Rejected" << endl;
}
int main()
{
	int age;
	bool driver_license;
	bool recomm;


	read_user_info(age, driver_license, recomm);
	check_and_print(age, driver_license, recomm);
	return(0);
}