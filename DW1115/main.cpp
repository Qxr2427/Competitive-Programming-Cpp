#include <iostream>
#include <vector>

using namespace std;
vector<int> a;
int count=0;
void output(int n){
    if(a.size()==1) return;
    cout<<n<<"=";
    for(int i=0;i<a.size()-1;i++){
        cout<<a[i]<<"+";
    }
    cout<<a[a.size()-1];
    cout<<endl;
    count++;
}
void solve(int n, int prec, int rem){
    if(rem==0) output(n);
    if(rem<0) return;
    for(int i=prec;i<=rem;i++){
        a.push_back(i);
        solve(n,i,rem-i);
        a.pop_back();
    }

}

int main() {
    int n;
    cin>>n;
    solve(n,1,n);
    cout<<"total="<<count;
    return 0;
}