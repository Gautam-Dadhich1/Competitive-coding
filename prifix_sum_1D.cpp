#include <iostream>
#define nline "\n"
using namespace std;

const int N = 1e3 + 10;

// Global arrays are initialized by zero
int arr[N];
int pf[N]; // prefix sum array

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    // we follow the one based indexing, which is more prefered in these
    for (int i = 1; i <= n; i++)
        pf[i] = pf[i - 1] + arr[i];

    int q;
    cin >> q;

    // here the q are number of queries
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << pf[r] - pf[l - 1] << nline;
    }

    return 0;
}