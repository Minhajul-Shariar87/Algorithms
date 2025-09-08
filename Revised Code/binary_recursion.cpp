#include<iostream>

using namespace std;

void b_search(int arr[],int n,int s){

    int f_index=0;
    int l_index=n-1;

    if(f_index>l_index){
        return;
    }
    int mid= n/2;
    for(int i=0;i<n;i++){
        
    }
    
}

int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int s;
    cout<<"Enter a number to search: ";
    cin>>s;
    b_search(arr,x,s);
    
}