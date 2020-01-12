#include <bits/stdc++.h>
using namespace std;
typedef pair<unsigned long long, unsigned long long> pii;
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
unsigned long long n;
unsigned long long k;
unsigned long long A[25][2];
unsigned long long B[25][2];
int m;
vector<pii> solve1;
vector<pii> solve2;
unsigned long long half;
void solvee1(unsigned long long cur, unsigned long long height, unsigned long long count){
    solve1.push_back(make_pair(height, count));
    if(cur==half-1) return;
    for(int i=cur+1;i<half;i++){
        if(A[i][0]>=height){
            solvee1(i,A[i][0],count+A[i][1]);
        }
    }
}
void solvee2(unsigned long long cur, unsigned long long height, unsigned long long count, unsigned long long firstheight){
    solve2.push_back(make_pair(firstheight, count));
    if(cur==m-1) return;
    for(int i=cur+1;i<m;i++){
        if(B[i][0]>=height){
            solvee2(i,B[i][0],count+B[i][1],firstheight);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scan(n);
    scan(k);
    half=n/2;
    for(int i=0;i<half;i++){
        scan(A[i][0]);
        scan(A[i][1]);
    }
    m=n-half;
    for(int i=0;i<m;i++){
        scan(B[i][0]);
        scan(B[i][1]);
    }
    unsigned long long countt=0;

    solve1.push_back(make_pair(0,0));
    for(int i=0;i<half;i++){
        solvee1(i,A[i][0],A[i][1]);
    }
    solve2.push_back(make_pair(9223372036854775100,0));

    for(int i=0;i<m;i++){
        solvee2(i,B[i][0],B[i][1],B[i][0]);
    }
    sort(solve1.begin(),solve1.end());
    sort(solve2.begin(),solve2.end());
    int start=0;
    for(int i=0;i<solve1.size();i++){
        bool flag=false;
        for(int j=start;j<solve2.size();j++) {
            if (solve1[i].first <= solve2[j].first) {
                if(!flag) {
                    start = j;
                    flag=true;
                }
                if (solve1[i].second + solve2[j].second >= k) {
                    countt++;
                    //cout<<i.first<<" "<<j.first<<endl;
                }
            }
        }
    }
    cout<<countt;
    return 0;
}