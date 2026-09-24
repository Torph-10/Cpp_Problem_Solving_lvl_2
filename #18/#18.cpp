#include <iostream>
using namespace std;

double read_number(string mess)
{
	int r;
	cout << mess << endl;
	cin >> r;
	return (r);
}
void calculate_circle_area(double r)
{
	double Area = 3.14 * pow(r, 2);
	cout << Area << endl;
}
int main()
{
	calculate_circle_area(read_number("Please enter a R ?"));
}