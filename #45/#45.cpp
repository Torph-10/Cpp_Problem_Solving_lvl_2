#include <iostream>
#include <string>
using namespace std;

int read_month(string mess)
{
	int month = 0;
	cout << "1 print jan\n" << "2 print feb\n" << "3 print mar\n" << "4 print apr\n" << "5 print may\n" << "6 print jun\n" << "7 print jul\n" << "8 print aug\n" << "9 print sep\n" << "10 print oct\n" << "11 print nov\n" << "12 print dec\n";
	cout << mess;
	cin >> month;

	return (month);
}
void print_month()
{
	int month = read_month("Please enter a month ? \n");
	if (month == 1)
		cout << "It's JAN\n";
	else if (month == 2)
		cout << "It's FEB\n";
	else if (month == 3)
		cout << "It's MAR\n";
	else if (month == 4)
		cout << "It's APR\n";
	else if (month == 5)
		cout << "It's MAY\n";
	else if (month == 6)
		cout << "It's JUN\n";
	else if (month == 7)
		cout << "It's JUL\n";
	else if (month == 8)
		cout << "It's AUG\n";
	else if (month == 9)
		cout << "It's SEP\n";
	else if (month == 10)
		cout << "It's OCT\n";
	else if (month == 11)
		cout << "It's NOV\n";
	else if (month == 12)
		cout << "It's DEC\n"; 
	else
		cout << "Wrong month\n";
}
int main()
{
	print_month();

	return (0);
}