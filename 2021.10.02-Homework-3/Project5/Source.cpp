# include <iostream>

using namespace std;

int main(int arge, char* argv[])
{
    int n = 0;
    int i = 0;
    cin >> n;
    for ( int i = 1; i<=n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }

    }

    return EXIT_SUCCESS;
}