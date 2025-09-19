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

    cout<<"Enter which to start: ";
    cin>>start;

    int cnt=0;
    int cnt1=0;
    int q[vertices];
    cout<<start<<" ";

    int i=start;
    while(i<vertices){
        for(int j=0;j<vertices;j++){
            if(bfs[i][j]==1){
                q[cnt1]=j;
                cnt1++;
                
                cout<<j<<" ";
                bfs[i][j]=0;
                bfs[j][i]=0;

                
            }
        }
        i=q[cnt];
        cnt++;
    }




    




}