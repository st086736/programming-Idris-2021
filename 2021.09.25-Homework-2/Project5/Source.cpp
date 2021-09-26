#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	cin >> k;
	if (k % 4 == 0 || k==1 )
	{
		cout << "YES" << endl;
	}
	if (k>1 && k % 4 != 0)
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
	

}