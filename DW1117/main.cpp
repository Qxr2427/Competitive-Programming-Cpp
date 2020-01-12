#include <bits/stdc++.h>
using namespace std;
string solve(string n){
    string res="";
   for(int i=0;i<n.length();i++){
       if(n.at(i)=='1'){
           if(i==n.length()-1){
               res=res+"2(0)+";
           }
           else if(i==n.length()-2){
               res=res+"2+";
           }
           else {
               string temp = solve(bitset<15>(n.length() - i - 1).to_string());
               res = res + "2(" + temp + ")+";
           }
       }
   }
   return res;
}
int main() {
    int n;
    if(n==0){
        cout<<0;
    }
    else {
        cin >> n;
        string s = bitset<15>(n).to_string();
        // cout<<s;
        string re = solve(s);
       // cout<<re<<endl;
        char prec, cur;
        prec = re.at(0);
        for (int i = 1; i < re.length(); i++) {
            cur = re.at(i);
            if (prec == '+' && cur == ')') {
                re.replace(i - 1, 1, "");
                i--;
            }
            prec = cur;
        }
        re.replace(re.length() - 1, 1, "");
        cout << re;
    }
    return 0;
}