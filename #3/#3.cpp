#include <iostream>
using namespace std;

int read_number(string message)
{
	int number;
	cout << message << endl;
	cin >> number;
	return (number);
}
bool check_number(int number)
{
	if (number % 2 == 0)
		return (0);
	else
		return (1);
}
void print_odd_even(bool number)
{
	if (number == 0)
		cout << "The number is EVEN \n"; 
	else
		cout << "The number is ODD \n";
}
int main()
{
	print_odd_even(check_number(read_number("Please enter a number ?")));

	return (0);
}