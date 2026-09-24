#include <iostream>
#include <string>
using namespace std;

double read_loanamount_monthlypayment(string mess)
{
	double i = 0;
	cout << mess;
	cin >> i;

	return (i);
}
void calculate_month_to_settle_theloan()
{
	double loanamount = read_loanamount_monthlypayment("Please enter Loan Amount ?\n");
	double MonthlyPayment = read_loanamount_monthlypayment("Please enter Monthly Payment ?\n");
	cout << loanamount / MonthlyPayment << " Total Months to pay\n";
}
int main()
{
	calculate_month_to_settle_theloan();

	return (0);
}
