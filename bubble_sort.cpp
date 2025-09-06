#include<bits/stdc++.h>
using namespace std;

int main(){
int x;
cin>>x;
float arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<x;i++){
    for(int j=i+1;j<x;j++){
        if(arr[i]>=arr[j]){
            float temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(auto u:arr){
    cout<<u<<" ";
}

cout<<endl;


}
