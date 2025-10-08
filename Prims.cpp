#include<bits/stdc++.h>
using namespace std;



int main(){
    
    int v,e,value;
    char f,t;
    cout<<"Enter no of vertices: ";
    cin>>v;
    vector<int>store;
    char arr1[v][v];
    int arr[v][v];
    vector<int>prims;
    int store[v];
    int cnt=0;
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
    cout<<"Enter no of edges and value: ";
    cin>>e;
    
    for(int i=1;i<=e;i++){
        cin>>f>>t>>value;
        fcnt=f-'A';
        
        tcnt=t-'A';
       
        arr[fcnt][tcnt]=value;
        arr[tcnt][fcnt]=value;
        
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    char start;
    cout<<"Enter which vertices to start: ";
    cin>>start;
    int i=start-'A';
    
    int cnt=0,value1=0;
    int nmin=999999999;
     for(int k=0;k<v;k++){
        if(arr[i][k]!=0){
        
         if(nmin<arr[i][k]){
            nmin=arr[i][k];
            i=k;
            prims[cnt]=nmin;
         }else{
            store.push_back(arr[i][k]);
         }
        }

     }
    while(i<v){
        int nmin=999999999;
        for(int k=0;k<store.size();k++){
            if(arr[i][k]!=0){
        
         if(nmin<arr[i][k]){
            nmin=arr[i][k];
            i=k;
            prims[cnt]=nmin;
         }else{
            store.push_back(arr[i][k]);
         }
        }
        }
        
    }


    
}