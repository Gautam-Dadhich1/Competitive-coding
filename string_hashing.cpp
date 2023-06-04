#include <iostream>
#include <cmath>
#define ll long long
#define nline "\n"
using namespace std;

const int MOD = 1e9 + 7;

// Hashing function
ll get_hash(string s)
{
    ll h = 0;
    for (char c : s)
        h = (h * 31 + (c - 'a' + 1)) % MOD;

    return h;

    // this is the actual implementation, but to reduce the computation we use the above one

    // ll h = 0, i = s.length()-1;
    // for(char c : s)
    // {
    //     h += ((ll)pow(31, i)*(c - 'a' + 1)) % MOD;
    //     i--;
    // }
    // return h;
}

int main()
{
    string s = "ab";
    cout << get_hash(s) << nline;
    return 0;
}