#include <iostream>
#include <vector>
#define SIZE 10
using namespace std;
int n,m;
vector<int> graph[6];
vector<int> res;
bool visited[6];
vector<int> indegree;
void TopologicalSort(){
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0 && !visited[i])
        {
     int j;
    for (j = 0; j <= graph[i].size()-1; j++) {
        indegree[j]--;
    }
            res.push_back(i);
            visited[i] = true;
            TopologicalSort();
            visited[i] = false;
            res.erase(res.end() - 1);
            for (j = 0; j <= graph[i].size()-1; j++) {
                indegree[j]++;
            }
        }
    }

    for(int i=0;i<n;i++) {
        if (!visited[i]) {
            flag = false;
        }
    }
    if(flag){
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}

int main() {
    cin>>n>>m;
    int a,b;
    for(int i=0;i<n;i++){
        indegree.push_back(0);
    }

    for(int i=0;i<m;i++){
        cin>>a>>b;
        graph[a].push_back(b);
        indegree[b]++;
    }
    cout<<SIZE;

    return 0;
}