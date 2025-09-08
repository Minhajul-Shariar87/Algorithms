#include<bits/stdc++.h>

using namespace std;

int main(){
    char a[]={'A','X','T','Y'};
    char b[]={'A','Y','Z','X'};

    int s1= sizeof(a)/sizeof(a[0]);
    int s2= sizeof(b)/sizeof(b[0]);

    

    int arr[s1+1][s2+1];

    for(int i=0;i<s1+1;i++){
        for(int j=0;j<s2+1;j++){
            
            arr[i][j]=0;

        }
    }

    
    

    for(int i=1;i<s1+1;i++){
        for(int j=1;j<s2+1;j++){
            
            if(b[j-1]==a[i-1]){
                arr[i][j]=arr[i-1][j-1]+1;
                
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