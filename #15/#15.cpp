#include <iostream>
using namespace std;
void read_a_b(float& a, float& b)
{
	cout << "Please enter A ?\n";
	cin >> a;
	cout << "Please enter B ?\n";
	cin >> b;
}
void calculate_rectangle(float a, float b)
{
	float Area = a * b;
	cout << Area;
}
int main()
{
	float a, b;
	read_a_b(a, b);
	calculate_rectangle(a, b);

	return (0);
}