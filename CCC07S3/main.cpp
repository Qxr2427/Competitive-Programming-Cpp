#include <bits/stdc++.h>
using namespace std;

bool visited[10005];
int mem[10005];
int solve(int a, int b, int count){
    while(!visited[a]) {
        visited[a] = true;
        if(a==b) return count;

        a=mem[a];
        count++;
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        cin>>mem[s];
    }
    int a=1;
    int b=1;
    while(a!=0&&b!=0){
        memset(visited, false,sizeof(visited));
        cin>>a>>b;
        if(a==0) break;
        int ss=solve(a,b,0);
        if(ss<0) cout<<"No"<<endl;
        else{
            cout<<"Yes"<<" "<<ss-1<<endl;

        }

    }
    return 0;
}