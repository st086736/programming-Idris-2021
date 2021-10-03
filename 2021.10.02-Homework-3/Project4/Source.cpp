# include <iostream>

using namespace std;

int main(int arge, char* argv[])
{

    int n = 0;
    int k = 0;
    int C = 0;
    cin >> n >> k;
    C = 1;
    for (int i = n - k + 1; i <= n; i++)
        C *= i;
    for (int i = 2; i <= k; i++)
        C /= i;
    cout  << C << endl;
    return EXIT_SUCCESS;
}