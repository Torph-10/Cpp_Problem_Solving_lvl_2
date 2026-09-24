#include <iostream>
#include <string>
using namespace std;

float read_totalbill_and_cashpaid(string mess)
{
	float number = 0;
	cout << mess;
	cin >> number;

	return (number);
}
void calculate_reminder()
{
	float total_bill = read_totalbill_and_cashpaid("Please enter total bill ?\n");
	float cash_paid = read_totalbill_and_cashpaid("Please enter cash paid ?\n");
	cout << cash_paid - total_bill << endl;
}
int main()
{
	calculate_reminder();
}