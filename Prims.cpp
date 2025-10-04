#include<bits/stdc++.h>
using namespace std;



int main(){
    
    int v,e;
    char f,t;
    cout<<"Enter no of Vertices: ";
    cin>>v;
    char arr1[v][v];
    int arr[v][v];
    int fcnt,tcnt;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            arr[i][j]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter no of edges: ";
    cin>>e;
    
    for(int i=1;i<=e;i++){
        cin>>f>>t;
        fcnt=f-'A';
        
        tcnt=t-'A';
        cout<<fcnt<<endl;
        cout<<tcnt<<endl;
        arr[fcnt][tcnt]=1;
        arr[tcnt][fcnt]=1;
        
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    
}