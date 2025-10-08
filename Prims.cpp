#include<bits/stdc++.h>
using namespace std;



int main(){
    
    int v,e,value;
    char f,t;
    cout<<"Enter no of vertices: ";
    cin>>v;
   
    char arr1[v][v];
    int arr[v][v];
    vector<int>prims(v,0);
    vector<int>store(v,0);
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
    
    int value1=0;

    // cout<<"LOop STarts"<<endl;
    int loop=0;
  
    while(loop<v){
       int nmin=999999999;
     for(int k=0;k<v;k++){
        if(arr[i][k]!=0){
        
         if(store[k]==0){
           store[k]=arr[i][k];
            arr[i][k]=0;
            arr[k][i]=0;
         }else{
            store[k]=min(store[k],arr[i][k]);
            arr[i][k]=0;
            arr[k][i]=0;
            
         }
        }

     }
    //  for(int x:store){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
     
     
     
    int index=0;
     for(int k=0;k<store.size();k++){

        if(nmin>store[k]&&store[k]!=0){
            nmin=store[k];
            // cout<<nmin<<" ";
            prims[cnt]=nmin;
            index=k;
            
            i=k;
        }
        // cout<<endl;
     }
     store[index]=0;
    //  for(int x:prims){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
     cnt++;
        loop++;
        
    }
    for(int x:prims){
        cout<<x<<" ";
    }
    cout<<endl;
    
int sum=0;
for(int x:prims){
        sum=sum+x;
    }
    cout<<sum<<endl;

    
}