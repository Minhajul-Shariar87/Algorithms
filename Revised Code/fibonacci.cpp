#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    
    int a=0;
    int b=1;
    int f;
    for(int i=0;i<x;i++){
        if(i==0){
            f=0;
        }
        else{
            f=a+b;
            b=a;
            a=f;
        }
        cout<<f<<" ";
    }
    cout<<endl;
    
    

}