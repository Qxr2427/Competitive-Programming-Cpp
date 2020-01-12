#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int cost=0;
    while(n>1) {
        int f = 2;
        int sqroot = sqrt(n);
        while (f <= sqroot && n % f != 0) {
            //largest factor of n;
            f = f + 1;
        }
        if (n % f == 0) {
        int a=n/f;
        n -= n / f;
        cost+=n/(a);
        }
        else{
            n--;
            cost+=n;
        }

    }
    cout<<cost;
    return 0;
}