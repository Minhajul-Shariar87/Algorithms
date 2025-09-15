#include<bits/stdc++.h>

using namespace std;



void addedges(){}


int main(){
    
    int edges,vertices;
    cout<<"Enter no of edges: ";
    cin>>edges;
    cout<<"Enter no of vertices: ";
    cin>>vertices;
    vertices+=1;
    
    
    cout<<"Enter no of edges: ";
    
    
    int bfs[vertices][vertices];
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            bfs[i][j]=0;
        }
    }


    
        for(int j=1;j<=edges;j++){
            int p,c;
            cin>>p>>c;
            bfs[p][c]=1;
            bfs[c][p]=1;
        
            
        }

    

    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout<<bfs[i][j]<<" ";
        }
        cout<<endl;
    }
    int start;
    int position=0;
    cin>>start;
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            if(bfs[i][j]==start){
                position=j;
                bfs[i][j]=0;
                bfs[j][i]=0;
                cout<<bfs[i][j]<<" ";
                break;
            }
        }
        break;
    }

    for(int i=position;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            if(bfs[i][j]==1){
                cout<<j<<" ";
                bfs[i][j]=0;
                bfs[j][i]=0;
                
            }
        }
    }


    




}