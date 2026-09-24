#include <iostream>
using namespace std;

int read_square_circle_area(string mess)
{
	int A;
	cout << mess;
	cin >> A;
	return (A);
}
void calculate_square_circle_area(int A)
{
	float Area;
	Area = 3.14 * (pow(A, 2) / pow(2, 2));
	cout << Area << endl;
}
int main()
{
	calculate_square_circle_area(read_square_circle_area("Please enter A ? \n"));

	return (0);
}