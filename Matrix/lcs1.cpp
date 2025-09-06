#include<bits/stdc++.h>

using namespace std;

int main(){
    char a[]={'a','b','b','c','a','a','c'};
    char b[]={'a','c','c','b','c','c','a'};

    int s1= sizeof(a)/sizeof(a[0]);
    int s2= sizeof(b)/sizeof(b[0]);

    int arr[s1+1][s2+1];

    for(int i=0;i<s1+1;i++){
        for(int j=0;j<s2+1;j++){
            if(i==0){
                arr[i][j]=0;
            }else{
                arr[i][j]=0;
            }
            break;
        }
    }

    for(int i=0;i<s1+1;i++){
    for(int j=0;j<s2+1;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<s1+1;i++){
        for(int j=1;j<s2+1;j++){
            // cout<<a[i-1]<<b[j-1]<<endl;
            if(a[i-1]==b[j-1]){
                arr[i][j]=arr[i-1][j-1]+1;
                // cout<<arr[i][j]<<endl;
            }else{
                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
            }
        }
    }
    for(int i=0;i<s1+1;i++){
    for(int j=0;j<s2+1;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }

}