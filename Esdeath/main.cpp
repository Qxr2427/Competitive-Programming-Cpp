#include <bits/stdc++.h>
using namespace std;
struct node{
    int num,depth;
    node(int a,int b){
        num=a;
        depth=b;
    }
};
int n,s;
vector<int> adj[5005];
bool visited1[5005];
bool visited2[5005];
int parent[5005];
vector<node> nodes;
bool compareInterval(node a, node b){
    return a.depth>b.depth?1:0;
}
void dfs(int cur,int depth){
    nodes[cur].depth=depth;
    for(int i:adj[cur]){
        if(i!=parent[cur]){
            parent[i]=cur;
            dfs(i,depth+1);
        }

    }
}
void expand(int cur, int x){
    if(x<0) return;
    for(int i:adj[cur]){
        if(!visited2[i]){
            if(x-1>=0) {
                visited1[i] = true;
                visited2[i] = true;
                expand(i,x-1);
            }
        }
    }
}
int solve(int x){
    for(int i=0;i<5006;i++){
        visited1[i]=false;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(!visited1[nodes[i].num]){
            for(int i=0;i<5006;i++){
                visited2[i]=false;
            }
            int cur=nodes[i].num;
            int q=x;
            while(q>0){
                cur=parent[cur];
                q--;
            }
                visited1[cur] = true;
                visited2[cur] = true;
                expand(cur, x);
                count++;
        }

    }
    return count;
}
int main() {

    scanf("%d%d", &n,&s);
    cout<<n<<s<<endl;
    for(int i=0;i<n-1;i++){
        int a,b;
        scanf("%d%d", &a,&b);
        a--,b--;
        cout<<a<<b<<endl;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        nodes.push_back(node(i,0));
    }

    dfs(0,1);
    sort(nodes.begin(),nodes.end(),compareInterval);
   int min=2147483647;
    for(int i=0;i<n;i++){
        int res=solve(i);
        if(res<=s){
            if(i<min) min=i;
        }
    }
    printf("%d",min);

    return 0;
}