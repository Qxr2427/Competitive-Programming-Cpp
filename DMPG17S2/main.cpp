#include <bits/stdc++.h>
int n,q;
using namespace std;
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
vector<int> graph[100005];
int main() {
    cin>>n>>q;
    for(int i=0;i<100005;i++){
        parent[i]=i;
    }
    for(int i=0;i<q;i++){
        char A;
        int x,y;
        cin>>A>>x>>y;
        if(A=='A'){
            graph[x].push_back(y);
            graph[y].push_back(x);
            if(findSet(x)!=findSet(y)){
                merge(x,y);
            }

        }
        if(A=='Q'){
            if(findSet(x)==findSet(y)) cout<<"Y"<<endl;
            else{
                cout<<"N"<<endl;
            }
        }


    }
    return 0;
}