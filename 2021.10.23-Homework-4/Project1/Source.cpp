# include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[100] { 0 };
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	return EXIT_SUCCESS;
}