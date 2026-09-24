#include <iostream>
#include <string>
using namespace std;

double read_total_sales(string mess)
{
	double total_sales = 0;
	cout << mess;
	cin >> total_sales;

	return (total_sales);
}
void print_commission(double total_sales)
{
	if (total_sales > 1000000)
		cout << total_sales * 0.01 << endl;
	else if (total_sales > 500000 && total_sales <= 1000000)
		cout << total_sales * 0.02 << endl;
	else if (total_sales > 100000 && total_sales <= 500000)
		cout << total_sales * 0.03 << endl;
	else if (total_sales > 50000 && total_sales <= 100000)
		cout << total_sales * 0.05 << endl;
	else
		cout << 0 << endl;
}
int main()
{
	print_commission(read_total_sales("Please enter total sales ?\n"));	
}