#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>v(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=v[0];
    for(int i=1;i<n;i++){
        if(max<v[i]){
            max=v[i];
    
        }
    }
    vector<int>v1(max+1,0);
    for(int i=0;i<v.size();i++){
        v1[v[i]]=v1[v[i]]+1;
    }
    

    v1[0]=v1[0];
    for(int i=1;i<v1.size();i++){
        
        v1[i]=v1[i-1]+v1[i];
       
        
    }
    
    for(int i=v.size()-1;i>=0;i--){
        v1[v[i]]=v1[v[i]]-1;
        int cnt= v1[v[i]];
        v2[cnt]=v[i];
    }
    for(int u:v2){
        cout<<u<<" ";
    }
    
    
    
    return 0;
}