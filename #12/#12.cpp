#include <iostream>
using namespace std;

void read_numbers(int &num1, int &num2)
{
	cout << "Please enter a number 1 ?" << endl;
	cin >> num1;
	cout << "Please enter a number 2 ?" << endl;
	cin >> num2;
}
void print_max_num(int num1, int num2)
{
	if (num1 >= num2)
		cout << "The Max Number is : " << num1 << endl;
	else
		cout << "The Max Number is : " << num2 << endl;
}

int main()
{
	int num1, num2;
	read_numbers(num1, num2);
	print_max_num(num1, num2);
}