#include <iostream>
#define nline "\n"
using namespace std;

const int N = 1e3 + 10;

// Global arrays are initialized by zero
int arr[N][N];
int pf[N][N]; // prefix sum array

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // we follow the one based indexing, which is more prefered in these
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            pf[i][j] = pf[i - 1][j] + pf[i][j - 1] + arr[i][j] - pf[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;

    // here the q are number of queries
    while (q--)
    {
        // if we need to take the sum between two co-ordinates that are (a, b) and (c, d)
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1];
    }

    return 0;
}