# include <iostream>

using namespace std;

int main(int arge, char* argv[])
{
	int n = 0;
	int i = 1;
	int factorial = 1;
	cin >> n;
	while (i <= n)
	{
		factorial *= i; ++i;
	}
	cout << factorial ;
	return EXIT_SUCCESS;
}
