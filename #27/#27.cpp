#include <iostream>
#include <string>
using namespace std;

int read_N(string mess)
{
	int N;
	cout << mess;
	cin >> N;
	return(N);
}
void print_numbers_for_N_to_1(int N)
{
	while (N >= 1)
	{
		cout << N << endl;
		N--;
	}
}

int main()
{
	print_numbers_for_N_to_1(read_N("Please enter a number ?\n"));

	return(0);
}