#include <iostream>
using namespace std;

double read_diameter_circle_area(string mess)
{
	double D;
	cout << mess;
	cin >> D;
	return (D);
}
void calculate_diameter_circle_area(double D)
{
	double Area = (3.14 * pow(D, 2)) / 4;
	cout << Area << endl;
}
int main()
{
	calculate_diameter_circle_area(read_diameter_circle_area("Pleas enter D ? \n"));

	return (0);
}