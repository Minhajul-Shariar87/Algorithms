#include<bits/stdc++.h>
using namespace std;

const int INF=100000000;

int main(){
    int n,e;
    cout<<"Enter the number of Vertices:"<<" ";
    cin>>n;
    cout<<"Enter the number of Edges:"<<" ";
    cin>>e;

    int graph[50][50];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                graph[i][j]=0;
            }
            else{
                graph[i][j]=INF;
            }
        }
    }
    cout<<"Enter Edges(u v w):"<<" "<<endl;
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u][v]=w;
        graph[v][u]=w;
    }
    int selected[60];
    for(int i=0;i<n;i++){
        selected[i]=0;
    }
    selected[0]=1; //Start from Vertex 0
    int edgeCount=0;
    int minCost=0;
    cout<<"Edges in MST:"<<endl;

        while(edgeCount<n-1){
        int u=-1,v=-1;
        int minWeight=INF;

        for(int i=0;i<n;i++){
            if(selected[i]){
                for(int j=0;j<n;j++){
                if(!selected[j] && graph[i][j] < minWeight){
                    minWeight = graph[i][j];
                    u = i;
                    v = j;
                }
                }
            }
            }

        if(u!=-1 && v!=-1){
        cout<<u<<"-"<<v<<":"<<" "<<minWeight<<endl;
        selected[v]=1;
        minCost+=minWeight;
        edgeCount++;
        }
    }
    cout<<"Total cost of MST="<<" "<<minCost<<endl;
}