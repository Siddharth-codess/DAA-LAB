#include<iostream>
using namespace std;
int v;
int graph[100][100];
bool visited[100];

bool dfs( int v, int dest){
    if(v==dest){
        return true;
    }
    visited[v]=true;
    for( int i=0;i<v;i++){
        if(graph[v][i]==1 && !visited[i]){
            if(dfs(i,dest))
                return true;
        }
    }
    return false;
}

int main(){
    cin>>v;
    for(int i =0;i<v;i++){
        for(int j=0;i<v;i++){
            cin>>graph[i][j];
        }
    }
    int src,dest;
    cin>>src>>dest;
    
    if(dfs(src,dest)){
        cout<<"yes path exist";
    }
    else{
        cout<<" not found ";
    }

    return 0;
}