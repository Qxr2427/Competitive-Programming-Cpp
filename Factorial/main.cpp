#include <bits/stdc++.h>
using namespace std;

unsigned long long power(unsigned long long x, unsigned long long y, unsigned long long p)
{
    unsigned long long res = 1;
    x = x % p;

    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

unsigned modInverse(unsigned long long a, unsigned long long p)
{
    return power(a, p - 2, p);
}

unsigned long long modFact(unsigned long long n, unsigned long long p)
{
    if (p <= n)
        return 0;

    int res = (p - 1);

    for (int i = n + 1; i < p; i++)
        res = (res * modInverse(i, p)) % p;
    return res;
}

int main()
{
    unsigned long long n,p;
    cin>>n>>p;
    unsigned long long ress=modFact(n, p);
    cout << ress;
    return 0;
}