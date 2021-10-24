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
	int INDEX = 0;
	int min = a[0];
	for (int i = 0; i < n; i++)
		if (min > a[i])
		{
			min = a[i];
			INDEX=i;
		}
	cout << INDEX;
	cout << endl;
	return EXIT_SUCCESS;

}