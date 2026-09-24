#include <iostream>
using namespace std;
void read_numbers(float  &num1, float &num2)
{
	cout << "Please enter a number 1 ? \n";
	cin >> num1;
	cout << "Please enter a number 2 ? \n";
	cin >> num2;
}
void swap_number(float num1, float num2)
{
	cout << num1 << endl << num2 << "\n\n";
	float swap;
	swap = num1;
	num1 = num2;
	num2 = swap;
	cout << num1 << endl << num2 << "\n";
}
int main()
{
	float num1, num2;
	read_numbers(num1, num2);
	swap_number(num1, num2);
}