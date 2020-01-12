#include <bits/stdc++.h>//2
using namespace std;
int grid[3][3];
int target[3][3]={{1,2,3},{4,5,6},{7,8,0}};
int mincount=99999999;

set<string> mem;
bool check(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[i][j]!=target[i][j]) return false;
        }
    }
    return true;
}
void swap(int x1, int y1, int x2, int y2){
    int tmp;
    tmp=grid[x1][y1];
    grid[x1][y1]=grid[x2][y2];
    grid[x2][y2]=tmp;
}
int solve(int x,int y){
    queue<int> qu;
    int count=0;
    while(!qu.empty()){
        int size=qu.size();
        count++;
        for(int i=0;i<size;i++){
            int cur=qu.front();
            qu.pop();

        }
    }

}
/*void solve(int x, int y, int count,int favor){
    if(count==50) return;
    //index x, index y;
    string d;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            d=d+to_string(grid[i][j]);
        }
    }
    if (mem.count(d)==1) {
        return;
    } else {
        // cout<<d<<" repeated"<<endl;
        mem.insert(d);
    }
    if(count<mincount){
       // cout<<count<<endl;
            if(check()){
            mincount=count;
                return;
            }
    }
    else{
        return;
    }
if(favor==4||favor==0) {
    if (y < 3) {
        swap(x, y, x, y + 1);
        //cout<<4<<endl;
        solve(x, y + 1, count + 1,0);

        swap(x, y, x, y + 1);
        //cout<<"reversed"<<endl;

    }
}
if(favor==3||favor==0) {
    if (x > 0) {
        swap(x, y, x - 1, y);
        // cout<<1<<endl;
        solve(x - 1, y, count + 1,0);
        swap(x, y, x - 1, y);
        //  cout<<"reversed"<<endl;
    }
}
    if(favor==1||favor==3){
    if (y > 0) {
        swap(x, y, x, y - 1);        //cout<<2<<endl;

        solve(x, y - 1, count + 1,0);
        swap(x, y, x, y - 1);
        //  cout<<"reversed"<<endl;

    }
}
if(favor==2||favor==0) {
    if (x < 3) {
        swap(x, y, x + 1, y);//cout<<3<<endl;
        solve(x + 1, y, count + 1,0);

        swap(x, y, x + 1, y);
        //  cout<<"reversed"<<endl;

    }
}

   return;
}*/
int main() {
    int s;
    int x,y;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>grid[i][j];
            if(grid[i][j]==0){
                x=i;y=j;
            }
        }
    }
    solve(x,y);


    cout<<mincount;
    return 0;
}