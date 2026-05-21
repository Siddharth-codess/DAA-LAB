#include<bits/stdc++.h>
using namespace std;
int main(){
    int V;
    cin >>V;
    int graph[100][100];
    
    for(int i =0;i<V;i++){
        for( int j=0;i<V;i++){
            cin>> graph [i][j];
        }
    }
    int color[100];
    for( int i=0;i<V;i++){
        color[i]=-1;
    }
    queue<int>q;
    q.push(0);
    color[0]=1;

    while(!q.empty()){
        int u= q.front();
        q.pop();
        for ( int v=0;v<V;v++){
            if(graph[u][v] && color[v]==-1){
                color[v]=1-color[u];
                q.push(v);
            }
            else if(graph[u][v] && color[v] == color[u]){
                cout<<"not bipartite";
                return 0;
            }
        }
    }
    cout<<" yes bipartite";
}