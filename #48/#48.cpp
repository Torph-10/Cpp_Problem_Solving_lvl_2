#include <iostream>
#include <string>
using namespace std;

double read_loanamount_and_howmanymonth(string mess)
{
	double i = 0;
	cout << mess;
	cin >> i;

	return (i);
}
void calculate_the_monthly_installment_amount()
{
	double loanamount = read_loanamount_and_howmanymonth("Please enter loan amount ?\n");
	double month_to_settle_the_loan = read_loanamount_and_howmanymonth("Please enter how many month to settle the loan ?\n");
	cout << loanamount / month_to_settle_the_loan << " Monthly Payment\n";
}
int main()
{
	calculate_the_monthly_installment_amount();

	return (0);
}