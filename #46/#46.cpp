#include <iostream>
#include <string>
using namespace std;
void print_all_letters_from_A_to_Z()
{
	char letter = 'A';
	while (letter <= 'Z')
	{
		cout << letter << endl;
		letter++;
	}
}
int main()
{
	print_all_letters_from_A_to_Z();

	return (0);
}