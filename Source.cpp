#include<iostream>
using namespace std;
int main()
{
	double N1, N2, N3, s, M, A1, A2;
	cout << "Please enter a number:\n";
	cin >> N1;
	cout << "Please enter your second number:\n";
	cin >> N2;
	cout << "Please enter your third number:\n";
	cin >> N3;
	s = (N1 + N2 +N3);
	cout << "Sum of your numbers is: \n" << s << "\n";
	M = (N1 * N2 * N3);
	cout << "Mul of your numbers is:  \n" << M << "\n";
	A1 = (N1 + N2 + N3);
	A2 = (A1 / 3);
	cout << "Avg of your numbers is:  \n" << A2 << "\n" << "\n";

	return 0;
}