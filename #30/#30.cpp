#include <iostream>
#include <string>
using namespace std;

int read_N(string mess)
{
	int N;
	cout << mess;
	cin >> N;
	while (N <= 0)
	{
		cout << "Invalid number !!\nPlease enter a Valid number\n";
		cin >> N;
	}
	return(N);
}
void calculate_factorial(int N)
{
	int i = N;
	N--;
	while (N >= 1)
	{
		i = i * N;
		N--;
	}
	cout << i << endl;
}

int main()
{
	calculate_factorial(read_N("Please enter a number ?\n"));
}