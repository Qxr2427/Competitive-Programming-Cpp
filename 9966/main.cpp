#include <bits/stdc++.h>
using namespace std;
int MAXN=1e5;
int MAXM=1e5;
int parent[100005];

int findSet(int n){
    int root=n;
    while(root!=parent[root]) root=parent[root];
    while(n!=root){
        int tmp=parent[n];
        parent[n]=root;
        n=tmp;
    }
    return root;

}
void merge(int a, int b){
    int ra=findSet(a), rb=findSet(b);
    parent[ra]=rb;
}

int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    for(int i=0;i<MAXN;i++){
        parent[i]=i;
    }
    vector<int> verts;
    for(int i=0;i<M;i++){
    int a,b;
    scanf("%d%d",&a,&b);
    a--,b--;
    if(findSet(a)!=findSet(b)){
        verts.push_back(i+1);

        merge(a,b);
    }


    }
    bool connected=true;
    for(int i=0;i<N;i++){
        if(findSet(i)!=findSet(0))connected =false;

    }
    if(connected){
        for(int i:verts){
            cout<<i<<endl;
        }
    }
    else{
        cout<<"Disconnected Graph"<<endl;
    }
    return 0;

    }

