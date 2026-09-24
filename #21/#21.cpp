#include <iostream>
using namespace std;

int read_circle_area_along_circumference(string mess)
{
	int L;
	cout << mess;
	cin >> L;
	return (L);
}
void calculate_circle_area_along_circumference(int L)
{
	float Area;
	Area = pow(L, 2) / (4 * 3.14);
	cout << Area;
}
int main()
{
	calculate_circle_area_along_circumference(read_circle_area_along_circumference("Please enter L ? \n"));
}