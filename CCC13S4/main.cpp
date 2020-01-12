#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    cin>>n;
    cin.ignore();
    while(n--) {
        string s;
        cin>>s;
        string suf[s.size()+5];
        for(int i=0;i<s.length();i++){
            string x=s.substr(i,s.length());
            suf[i]=x;
        }
     //   int z = sizeof(suf)/sizeof(suf[0]);

        sort(suf,suf+s.size());
        int ctr=suf[0].size();
        for(int a=0;a<s.length();a++){
            int m=min(suf[a].size(),suf[a+1].size());
            int ctr2=0;
            for(int b=0;b<m;b++){
                if(suf[a][b]!=suf[a+1][b]) break;
                else{
                    ctr2++;
                }
            }
            ctr+=suf[a+1].size()-ctr2;
        }
        cout<<ctr+1<<endl;
    }
    return 0;
}