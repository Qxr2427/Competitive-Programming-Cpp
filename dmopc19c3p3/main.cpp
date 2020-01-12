#include <bits/stdc++.h>
using namespace std;
int BIT[150005], a[150005], n;
void update(int x, int val)
{
    for(; x <= n; x += x&-x)
        BIT[x] += val;
}
int query(int x)
{
    int sum = 0;
    for(; x > 0; x -= x&-x)
        sum += BIT[x];
    return sum;
}

int main() {
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 2) a[i] = -1;
        update(i, a[i]);
    }
    int count = 0;
    double maj;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (query(j) - query(i - 1) > 0) count++;
        }
    }             cout << count;
    return 0;

}