#include <iostream>
#include <string>
using namespace std;

void read_info(int &penny, int &nickel, int &dime, int &quarter, int &dollar)
{
	cout << "please enter a penny ?\n" << endl;
	cin>> penny;
	cout << "please enter a nickel ?\n" << endl;
	cin>> nickel ;
	cout << "please enter a dime ?\n" << endl;
	cin>> dime ;
	cout << "please enter a quarter ?\n" << endl;
	cin>> quarter ;
	cout << "please enter a dollar ?\n" << endl;
	cin >> dollar;
}
void calculate_total(int penny, int nickel, int dime, int quarter, int dollar)
{
	penny = penny + ((nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100));
	cout << penny << " Pennies\n";
	float total;
	total = penny / 100.0;
	cout << total << " Dollar\n";
}
int main()
{
	int penny, nickel, dime, quarter, dollar;
	read_info(penny, nickel, dime, quarter, dollar);
	calculate_total(penny, nickel, dime, quarter, dollar);

	return 0;
}