#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	cin >> a >> b >> c >> x >> y >> z;
	cout << (x - a) * 3600 + (y - b) * 60 + (z - c) << endl;

	return 0;

}