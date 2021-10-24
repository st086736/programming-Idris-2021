# include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[100]{ 0 };
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl;
	int max = 0;
	int max2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max2 = max;
			max = a[i];
		}
	}
	max = max2;
	cout << max2;
	cout << endl;
	return EXIT_SUCCESS;
}