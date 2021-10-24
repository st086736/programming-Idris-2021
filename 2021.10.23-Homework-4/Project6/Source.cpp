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
	int m = 1;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
	{
			m = m * a[i];
	}
	cout << m;
	cout << endl;
	return EXIT_SUCCESS;

}