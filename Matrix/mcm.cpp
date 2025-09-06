#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int d[]={30,35,15,5,10,20,25};
    
    int x=sizeof(d)/sizeof(d[0]);
    int s=x-1;
    int arr[s][s];
    
     
    for(int i=0;i<s;i++){
        arr[i][i]=0;
    }
    
    
    for(int l=1;l<s;l++){
        for(int i=0;i<s-1;i++){
        for(int j=i+l;j<s;j++){
            int cnt=9999999;
            
            for(int k=i;k<j;k++){
                arr[i][j]=arr[i][k]+arr[k+1][j]+(d[i]*d[k+1]*d[j+1]);
                cout<<cnt<<" ";
                cout<<arr[i][j]<<endl;
                
                cnt=min(cnt,arr[i][j]);
                arr[i][j]=cnt;
                // cout<<d[j+1]<<endl;
                // cout<<d[i]<<d[k+1]<<d[j+1]<<endl;
                
            }
                cout<<arr[i][j]<<endl;
            
            break;
        }
        cout<<endl;
    }
    }
    cout<<arr[0][5]<<endl;
    




}