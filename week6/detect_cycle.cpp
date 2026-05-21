#include<bits/stdc++.h>
using namespace std;

int V;
int graph[100][100];
bool visited[100],recstack[100];

bool dfs( int v){
    visited[v]=true;
    recstack[v]= true;
    for( int i=0;i<V;i++){
        if(graph[v][i]){
            if(!visited[i] && dfs(i)){
                return true;
            }
            else if(recstack){
                return true;
            }
        }

    }
    recstack[v]=false;
    return false;
}

int main(){
    cin>>V;
    for ( int i =0;i<V;i++){
        for(int j =0;i<V;j++){
            cin>>graph[i][j];
        }
    }
    for(int i =0;i<V;i++){
        if(!visited[i]){
            if(dfs(i)){
                cout<<"yes cycle exist";
                return 0;
            }
        }
    }
    cout<<" no cycle detected";
}