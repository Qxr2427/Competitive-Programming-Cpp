    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    typedef tuple<int,int,int> tu;
    typedef pair<pair<int, int>, int> pii;

    int n, m;
    int s, d;

    set<string> mem;
    int k;
    /*void dijkstra(int src, int des){
        int damg=0;
        memset(dist,0x3f, sizeof(dist));
        dist[src][0]=0;
        priority_queue< tu, vector <tu> , greater<tu> > pq;
        pq.push(make_tuple(src,dist[src][0],0));
        while(!pq.empty()){
            int v=get<0>(pq.top());
            int du=get<1>(pq.top());
            damg=get<2>(pq.top());
            pq.pop();
            int dmg;
            if(damg==0) dmg=0;
            else{
                dmg=damg;
            }
          //  if(v==des) break;
            vector<tu> temp=graph[v];
            for(tu t:temp){
                int next=get<0>(t);
                int dnext=get<1>(t);
                int ddamg=get<2>(t);
                int ddmg;
                if(ddamg==0) ddmg=0;
                else{
                    ddmg=dnext;
                }
                if(dmg+ddmg>k) continue;
                if(dist[next][dmg+ddmg]>dist[v][dmg]+dnext){
                    dist[next][dmg+ddmg]=dist[v][dmg]+dnext;
                    pq.push((make_tuple(next, dist[next][dmg+ddmg],dmg+ddmg)));
                }
            }
        }
    }
    */

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin>>k;
        cin>>n>>m;
        int dist[n+5];
        vector<tu> graph[n+5];

        for(int i=0;i<m;i++){
            int a,b;
            int c,d;
            cin>>a>>b>>c>>d;
            graph[a].push_back(make_tuple(b,c,d));
            graph[b].push_back(make_tuple(a,c,d));
        }
        //dijkstra(0,n-1);
        for(int i=0;i<n+5;i++){
            dist[i]=0x3f3f3f3f;
        }
        int best=0x3f3f3f3f;
        priority_queue< pii, vector <pii> , greater<pii>> pq;
        pq.push({{0,0},0});
        while(!pq.empty()){
            int v=pq.top().second;
            int du=pq.top().first.second;
            int damg=pq.top().first.first;
            pq.pop();
            if(v==n-1&&damg<=k){
                best=min(best,du);
                continue;
            }
            //  if(v==des) break;
            if(damg>k) continue;
            if(du>dist[v]) continue;
            dist[v]=min(dist[v],du);
            vector<tu> temp=graph[v];
            for(tu t:temp){
                int next=get<0>(t);
                int dnext=get<1>(t);
                int ddamg=get<2>(t);
                int ddmg=0;
                if(ddamg==1) ddmg=dnext;
               // if(damg+ddmg>k) continue;
                if(damg+ddmg<=k&&dist[next]>du+dnext){
                    pq.push({{damg+ddmg,du+dnext},next});

                }
            }
        }


        if (best==0x3f3f3f3f ) cout << -1 << endl;
        else cout << best << endl;
        return 0;
    }