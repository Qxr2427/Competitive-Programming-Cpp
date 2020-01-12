#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector< pair <int,int> > event;
int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<m;i++) {
        int s, t;
        cin >> s >> t;
        event.push_back(make_pair(s, t));
    }
    sort(event.begin(),event.end());
    int cur=0;
    int max1=0;
    for(int i=0;i<event.size();i++){
        if(cur<event[i].first){
            max1=max(max1,event[i].first-cur);
            cur=event[i].second;
        }
        else if(cur<event[i].second){
            cur=event[i].second;
        }
    }
    max1=max(max1,n-cur);
    cout<<max1;
    return 0;
}