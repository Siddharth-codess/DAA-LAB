#include<bits/stdc++.h>
using namespace std;
int main(){
int V;
cin>>V;

int graph [100][100];

for(int i =0;i<V;i++){
    for(int j=0;j<V;i++){
        graph[i][j];
    }
}
int src;
    cin >> src;

    int dist[100];

    for(int i=0;i<V;i++)
        dist[i] = 9999;

    dist[src] = 0;
for( int k =0 ; k <V-1;k++){
    for( int i =0;i<V;i++){
        for( int j=0;j<V;j++){
            if( graph [i][j] && dist[i] + graph[i][j] < dist[j]){
                dist[j]=dist[i]+graph[i][j];
            }
        }
    }
}
for(int i=0;i<V;i++)
        cout<<i<<" : "<<dist[i]<<endl;

return 0;
}