#include <iostream>
#include <string>
using namespace std;

float read_numberofhours(string mess)
{
	float number_of_hours = 0;
	cout << mess;
	cin >> number_of_hours;

	return (number_of_hours);
}
void calculate_number_ofweeksanddays()
{
	float days = (read_numberofhours("Please enter number of hours ? \n")) / 24;
	float weeks = days / 7;
	cout << days << " Days" << endl;
	cout << weeks << " Weeks" << endl;
}
int main()
{
	calculate_number_ofweeksanddays();

	return (0);
}