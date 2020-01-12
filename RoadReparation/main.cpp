#include <bits/stdc++.h>
#define f first
#define s second
//min spamming tree
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
int parent[100005];
int n,m;
vector<pll> graph[100005];
pair <long long, pair<int, int> > p[200005];
int ctr=0;
struct edge {
    int src, des;
    ll w;
    int o;


}; int Cmp (edge e2, edge e)  {
    if(e2.w != e.w) return e2.w - e.w;
    else return e2.o - e.o;
}
edge edges[200005];

void init()
{
    for(int i = 0;i < 100005;++i)
        parent[i] = i;
}
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

 long long kruskal()
{
    int x, y;
     long long cost, minimumCost = 0;
    for(int i = 0;i < m;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(findSet(x) != findSet(y))
        {
            minimumCost += cost;
            merge(x, y);        ctr++;

        }

    }
    return minimumCost;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int d;
    cin>>d;
    init();
    int mark[m];
    for (int i = 0; i < m; i++) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
        graph[b].push_back(make_pair(a, c));
        p[i] = make_pair(c, make_pair(a, b));
        if(i<n-1)
        edges[i]={a,b,c,0};
        else{
            edges[i]={a,b,c,1};
        }
    }
   // qsort(edges,m,sizeof(edges[0]),Cmp);
    ll min1=kruskal();
    if(ctr!=n-1){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else {
    cout << ctr << endl;
    }
    return 0;
}