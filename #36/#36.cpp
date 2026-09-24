#include <iostream>
#include <string>
using namespace std;


void read_operation(int& num1, int& num2, char &opr_t)
{
	cout << "Please enter number 1 ?\n";
	cin >> num1;
	cout << "Please enter number 2 ?\n";
	cin >> num2;
	cout << "Please enter operation type ? \n";
	cin >> opr_t;
}
void calculate_operation(int num1, int num2, char opr_t)
{
	if (opr_t == '+')
		cout << num1 + num2 << endl;
	else if (opr_t == '-')
		cout << num1 - num2 << endl;
	else if (opr_t == '*')
		cout << num1 * num2 << endl;
	else if (opr_t == '/')
		cout << num1 / num2 << endl;
	else
		cout << "Wrong Operation Type !! \n";
}
int main()
{
	int num1, num2;
	char operation_type;
	read_operation(num1, num2, operation_type);
	calculate_operation(num1, num2, operation_type);

	return (0);
}