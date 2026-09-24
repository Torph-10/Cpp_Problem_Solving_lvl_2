#include <iostream>
using namespace std;

int read_number(string mess)
{
	int num;
	cout << mess << endl;
	cin >> num;
	return (num);
}
void print_halfnum(int num)
{
	cout << "Half of " << num << " is " << num / 2 << endl;
}

int main()
{
	print_halfnum(read_number("Please enter a number ?"));
}