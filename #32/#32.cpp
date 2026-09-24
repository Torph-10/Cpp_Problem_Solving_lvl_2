#include <iostream>
#include <string>
using namespace std;

void read_numbers(int &num, int &M)
{
	cout << "Please enter a number ?\n";
	cin >> num;
	cout << "Please enter the power of the number ?\n";
	cin >> M;
}
void print_the_number_M(int N, int M)
{
	while (M-1 > 1)
	{
		N = N * N;
		M--;
	}
	cout << N << endl;
}

int main()
{
	int number = 0, M = 0;
	read_numbers(number, M);
	print_the_number_M(number, M);

}