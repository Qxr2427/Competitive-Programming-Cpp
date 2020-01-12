#include <bits/stdc++.h>
#define ll long long
#define MAXN 150005
int N,M,Q,sqn;
using namespace std;
int L[MAXN], A[MAXN], shift[MAXN], decomp[400], indx[MAXN];
vector <int> trains[MAXN];

void operate(int line){

}
ll query(int lb, int rb){

}
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M>>Q;
    sqn=sqrt(N);
    for (int i = 0; i < N; i++){
        cin>>L[i];
        trains[L[i]].push_back(i);
     }
    for (int i = 0; i < N; i++){
        cin>>A[i];
        decomp[i/sqn]+=A[i];
    }

    return 0;
}