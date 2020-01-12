#include <bits/stdc++.h>
using namespace std;
#define ll  long long
int m;
ll tree[2000010*4+5];
ll A[2000010];
ll lazy[2000010*4+5];

void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}
void updateRange(int node, int start, int end, int l, int r, ll val)
{
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] += lazy[node];    // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  // Mark child as lazy
            lazy[node*2+1] += lazy[node];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }
    if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l and end <= r)
    {
        // Segment is fully within range
        tree[node] += val;
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        // Updating left child
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = min(tree[2*node],tree[2*node+1]);
}
void updateRange2(int node, int start, int end, int l, int r, ll val)
{
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] += lazy[node];    // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  // Mark child as lazy
            lazy[node*2+1] += lazy[node];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }
    if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l and end <= r)
    {
        // Segment is fully within range
        tree[node] = val;
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] = val;
            lazy[node*2+1] = val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        // Updating left child
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = min(tree[2*node],tree[2*node+1]);
}
ll queryRange(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)
        return 0;         // Out of range
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] +=  lazy[node];            // Update it
        if(start != end)
        {
            lazy[node*2] += lazy[node];         // Mark child as lazy
            lazy[node*2+1] += lazy[node];    // Mark child as lazy
        }
        lazy[node] = 0;                 // Reset it
    }
    if(start >= l and end <= r)             // Current segment is totally within range [l, r]
        return tree[node];
    int mid = (start + end) / 2;
    ll p1 = queryRange(node*2, start, mid, l, r);         // Query left child
    ll p2 = queryRange(node*2 + 1, mid + 1, end, l, r); // Query right child
    tree[node] = min(p1,p2);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    //if(m!=2) m=3;
    for(int i=1;i<n+1;i++) {
        cin>>A[i];
    }
    build(1,1,n);
    for(int i=0;i<q;i++) {
        int a;
        cin>>a;
        if(a==1) {
            int b,c,d;
            cin>>b>>c>>d;
            updateRange(1,1,n,b,c,d);
        }
        if(a==2) {
            int b,c,d;
            cin>>b>>c>>d;
            updateRange2(1,1,n,b,c,d);
        }
        if(a==3) {
            int b,c;
            cin>>b>>c;
            printf("%lld\n",queryRange(1,1,n,b,c));
            // System.out.println(query(0,0,n-1,b,c)%m);
        }
    }
    return 0;
}