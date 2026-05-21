#include<bits/stdc++.h>
using namespace std;
int main(){
    int V;
    cin>>V;
    int graph[100][100];

    for(int i=0;i<V;i++){
        for( int j=0;i<V;j++){
            cin>>graph[i][j];
        }
    }
    int src;
    cin>>src;

    int dist[100],visited[100];

    for(int i =0;i<V;i++){
        dist[i]=9999;
        visited[i]=0;
    }
    dist[src]=0;

    for(int count =0; count< V-1; count ++){
        int min = 9999,u ;
        for(int i =0;i<V;i++){
            if(!visited[i] && dist[i] < min){ 
                min= dist[i];
                u=i;
            }
        }
        visited[u]=1;

        for(int v=0;v<V;v++){
        if(graph[u][v] && !visited[v] && dist[u] + graph [u][v]< dist[v]){
            dist[v]=dist[u]+graph[u][v];
        }
        }
    }
    for(int i=0;i<V;i++){
        cout<<i<< " : "<< dist[i] << endl;
    }
    return 0;
}