#include <iostream>
#include <string>
using namespace std;

int read_number(string mess)
{
	int number;
	cout << mess;
	cin >> number;
	while (number <= 0)
	{
		cout << "Invalid number !!\nPlease enter valid number ?\n";
		cin >> number;
	}
	return(number);
}
void print_the_power_of_number(int number)
{
	cout << number * number << endl << number * number * number << endl << number * number * number * number << endl;
}
int main()
{
	print_the_power_of_number(read_number("Please enter a number ?\n"));
}