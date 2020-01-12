    #include <bits/stdc++.h>
    #include <stdlib.h>     /* abs */

    int n,q;
    using namespace std;
    bool visited[1005];
    vector<int> graph[1005];
    set<int> s1;
    set<int> s2;

    bool pos=true;
    bool pos2=false;
    int dif=999999999;
    string min1="999999999999999999999";
    void dfs2(int x);

    int check(){
        for(int i=1;i<n+1;i++){
            if(!visited[i]) return i;
        }
        return 0;
    }
    void dfs(int x){
         for(int A:graph[x]){
             if(s1.count((A)==1)){
                 pos=false;
                 return;
             }
             if(!visited[A]){
                 s2.insert(A);
                 visited[A]=true;
                 dfs2(A);
             }
         }
    }
    void dfs2(int x){
        for(int A:graph[x]){
            if(s2.count((A)==1)){
                pos=false;
                return;
            }
            if(!visited[A]){
                s1.insert(A);
                visited[A]=true;
                dfs(A);
            }
        }
    }
    int main() {
        cin>>n>>q;
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
                graph[x].push_back(y);
                graph[y].push_back(x);
        }

        for(int j=1;j<=n;j++) {
            visited[j] = true;
            s1.insert(j);
            dfs(j);
            while(check()!=0){
                int n=check();
                visited[n] = true;
                s1.insert(n);

                dfs(n);
            }
            if (!pos) {
                continue;
            } else {
                pos2=true;
                string res="";
                int a1=s1.size();
                int a2=s2.size();
                int ns;
                if(a1>=a2) ns=a1-a2;
                else{
                    ns=a2-a1;
                }
                if(ns>dif){
                    continue;
                }
               else if(ns<dif) {
                   dif=ns;
                    for (int i = 1; i < n + 1; i++) {
                        if (s1.count(i) == 1) {
                            res=res+"1";
                        } else {
                            res=res+"2";
                        }
                    }
                    min1=res;
                }
                 else if(ns==dif){
                    for (int i = 1; i < n + 1; i++) {
                        if (s1.count(i) == 1) {
                            res=res+"1";
                        } else {
                            res=res+"2";
                        }
                    }

                char arr1[res.length()+1];
                strcpy(arr1, res.c_str());
                char arr2[min1.length()+1];
                strcpy(arr2,min1.c_str());
                if(lexicographical_compare(arr1, arr1+res.length(), arr2, arr2+min1.length())){
                    min1=res;
                }
           }
            }
            memset(visited,false,sizeof(visited));
            s1.clear();
            s2.clear();
            pos=true;
        }
        if(pos2==false) cout<<-1;
        else{
            cout<<min1;
        }
        return 0;
    }
