#include <iostream>
using namespace std;

void read_numbers(int &num1, int &num2, int &num3, string mess)
{
	cout << mess << "1 ?\n";
	cin >> num1;
	cout << mess << "2 ?\n";
	cin >> num2;
	cout << mess << "3 ?\n";
	cin >> num3;
}
void sum_3_num(int num1, int num2, int num3)
{
	int sum;
	sum = num1 + num2 + num3;
	cout << sum << endl;
}
int main()
{
	int num1, num2, num3;
	read_numbers(num1, num2, num3, "Please enter number ");
	sum_3_num(num1, num2, num3);
}