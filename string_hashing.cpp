#include <iostream>
#define ll long long 
#define nline "\n"
using namespace std;

// Hashing function 
const int MOD = 1e9+7;

ll get_hash(string s)
{
    ll h = 0;
    for(char c : s)
    {
        h = (h * 31 + (c - 'a' + 1)) % MOD;
    }
    return h;
}

int main()
{
    string s = "ab";
    cout << get_hash(s)<<nline;
    return 0;
}