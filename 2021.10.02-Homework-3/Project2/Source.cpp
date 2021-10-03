# include <iostream>

#include <math.h>

using namespace std;

int main(int arge, char* argv[])
{
	int n = 0;
	int i = 0;
	int long result = 1;
	cin >> n;
		
		for (int i = 0; i < n; i++)
		{
			result = 2 * result;
		}
		cout << result << endl;
	return EXIT_SUCCESS;
}