//BFS Code
#include<bits/stdc++.h>
using namespace std;

int adj[10][10]; //Adjacency Matrix
int visited[10]; //Visited Array
int n; //Number of Nodes

void dfs(int v){ //v=Number of Edge
    cout<<v<<" ";
    visited[v]=1;
    //Recursion
    for(int i=0;i<n;i++){
        if(adj[v][i]==1&&visited[i]==0){
            dfs(i); //Explore next node
        }
    }

}

int main(){
    cout<<"Number of Nodes:"<<" ";
    int e;
    cin>>n;
    cout<<"Number of Edges:"<<" ";
    cin>>e;

   //Initialize Adjacency Matrix
    for(int i=0;i<n;i++){
    visited[i]=0;

        for(int j=0;j<n;j++){
        adj[i][j]=0;
        }
    }
    cout<<"Edeges(u,v):"<<" "<<endl;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        //Undirected Graph
        adj[u][v]=1;
        adj[v][u]=1;
    }
        int start;
        cout<<"Enter Starting Node:"<<" ";
        cin>>start;
        cout<<"DFS Traversal:"<<" "<<endl;
        dfs(start);


}