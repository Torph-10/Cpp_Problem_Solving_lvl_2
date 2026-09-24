#include <iostream>
using namespace std;

void read_number(int &num1, int &num2, int &num3)
{
	cout << "Please enter a number 1 ?" << endl;
	cin >> num1;
	cout << "Please enter a number 2 ?" << endl;
	cin >> num2;
	cout << "Please enter a number 3 ?" << endl;
	cin >> num3;
}
void check_and_print(int num1, int num2, int num3)
{
	if (num1 == num2 && num2 == num3)
		cout << "The numbers entred is equal !!" << endl;
	else if (num1 > num2)
	{
		if (num1 > num3)
			cout << "The max is number 1 : " << num1 << endl;
	}
	else if (num2 > num3)
		cout << "The max is number 2 : " << num2 << endl;
	else
		cout << "The max is number 3 : " << num3;
}
int main()
{
	int num1, num2, num3;
	read_number(num1, num2, num3);
	check_and_print(num1, num2, num3);
}