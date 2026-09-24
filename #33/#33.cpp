#include <iostream>
#include <string>
using namespace std;

float read_grade(string mess)
{
	float Grade;
	cout << mess;
	cin >> Grade;
	return(Grade);
}
char check_grade(float grade)
{
	if (grade >= 90)
		return ('A');
	else if (grade >= 80 && grade <= 89)
		return ('B');
	else if (grade >= 70 && grade <= 79)
		return ('C');
	else if (grade >= 60 && grade <= 69)
		return ('D');
	else if (grade >= 50 && grade <= 59)
		return ('E');
	else
		return ('F');
}
void print_grade(char grade)
{
	cout << grade << endl;
}

int main()
{
	print_grade(check_grade(read_grade("Please enter your grade ?\n")));

	return 0;
}