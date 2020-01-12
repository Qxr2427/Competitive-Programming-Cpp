#include<bits/stdc++.h>
#define MAXN 200005
using namespace std;
vector<long long> graph[MAXN];
long long val[MAXN];
long long dp[MAXN][2];
long long solve(int cur, int dec, int parent){
    if(dp[cur][dec]!=-1)
        return dp[cur][dec];
    dp[cur][0]=0;
    dp[cur][1]=val[cur];
    if(graph[cur].size()==1&&graph[cur][0]==parent) {
        return dp[cur][dec];
    }
    for(int x:graph[cur]){
        if(x==parent){
            continue;
        }
        long long a=solve(x,0,cur);
        long long b=solve(x,1,cur);
        dp[cur][0]+=max(a,b);
        dp[cur][1]+=a;
    }
    return dp[cur][dec];
}
int main() {
    int x;
    scanf("%d",&x);
    int a,b;
    for(int i=0;i<x-1;i++) {
        scanf("%d%d", &a, &b);
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }
    long long vals;
    for(int i=0;i<x;i++){
        scanf("%lld",&vals);
        val[i]=vals;
    }
    for(int i=0;i<MAXN;i++){
        for(int j=0;j<2;j++){
            dp[i][j]=-1;
        }
    }
    long long max1=-1;
   /* for(int i=0;i<=x-1;i++) {
        long long a = solve(i, 1, -1);
        for (int i = 0; i < MAXN; i++) {
            for (int j = 0; j < 2; j++) {
                dp[i][j] = -1;
            }
        }
            long long b = solve(i, 0, -1);
            long long res = max(a, b);
            for (int i = 0; i < MAXN; i++) {
                for (int j = 0; j < 2; j++) {
                    dp[i][j] = -1;
                }
            }
            if (res > max1) {
                max1 = res;
            }

    }*/
   max1=max(solve(0,0,-1),solve(0,1,-1));
    cout << max1;

    return 0;
}