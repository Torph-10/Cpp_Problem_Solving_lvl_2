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
void print_numbers_to_N(int N)
{
	int i = 1;
	if (N <= 0)
		cout << "The number was not positive !!";
	while (i <= N)
	{
		cout << i << endl;
		i++;
	}
}

int main()
{
	print_numbers_to_N(read_N("Please enter a number ? \n"));

	return(0);
}