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
void sum_odd_nums_from_1_to_N(int N)
{
	int i = 0;
	while (1 <= N)
	{
		if (N % 2 == 1)
			i = i + N;
		N--;
	}
	cout << i << endl;
}

int main()
{
	sum_odd_nums_from_1_to_N(read_N("Please enter N ?\n"));
}