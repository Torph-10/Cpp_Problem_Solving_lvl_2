#include <iostream>
#include <math.h>
using namespace std;

void read_rectangle_diagonal(float& a, float& b)
{
	cout << "Please enter A ? \n";
	cin >> a;
	cout << "Please enter B ? \n";
	cin >> b;
}
void calculate_rectangle_diagonal(float a, float b)
{
	float Area = a * (sqrt(pow(b, 2) - pow(a, 2)));
	cout << Area << endl;
}
int main()
{
	float a, b;
	read_rectangle_diagonal(a, b);
	calculate_rectangle_diagonal(a, b);

	return (0);
}