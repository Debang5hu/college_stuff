#include <iostream>
#define V 4
#define INF 99999

using namespace std;

void print(int graph[][V]){
    for(int i=0;i<V;++i){
        for(int j=0;j<V;++j){
            if(graph[i][j] == INF) cout << "INF" << " " ;
            else cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

void floydwarshall(int dist[][V]){
    for(int k=0;k<V;++k){
        for(int i=0;i<V;++i){
            for(int j=0;j<V;++j){
                if(dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[i][k] != INF) && (dist[k][j] != INF)) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    print(dist);
}

int main(){
    int graph[V][V] ={
        {0,5,INF,10},
        {INF,0,3,INF},
        {INF,INF,0,1},
        {INF,INF,INF,0}};

    floydwarshall(graph);
    return 0;
}
