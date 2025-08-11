// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    /////////////////////INPUT COIN AND N/////
    int n,coin;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter Coin: ";
    cin>>coin;
    ///////////////////////DECLARING ARRAY/////////////////////
    int arr[n];
    int arr1[n];
    //////////////////////////INPUT ARRAY///////////////////////////
    cout<<"Enter Number(only Integer): ";
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    cout<<endl;
    ///////////////////////////SOTING ARRAY FROM ASC TO DESC//////////////////////////////////
    sort(arr,arr+n); // Arr is 0 , arr+n=0+n=n. But it will be start from begining upto n-1
    /////////////////////////////////REVERSE ARRAY////////////////////////////////////////////
    int cnt=0;
    for(int j=n-1;j>=0;j--){
        arr1[cnt]=arr[j]; // Storing the reverse number to arr1.
        cnt++;
    }
/////////////////REAL START///////////////////////////////////////////    
int remaining=-1; // Suppose remaining is -1;
int i=0; // Initiate i and cnt1
int cnt1=0;
while(remaining!=0){
    
    if(coin==arr1[i]){
        remaining=0; // if both coin and numbers are equal then remainder is 0
        cnt1++;// It will increase by 1
        break;
    }
    else if(coin>arr1[i]){ // If coin is greater then the array index number
        remaining=coin-arr1[i]; // Remaining calculation
        coin=remaining;
        cnt1++;// It will be increase by 1
        i=0; // If it matches it will start from 0 index.
        
    }else{
        
    i++; // If both condition failed then the index will be increase by one
    }
    
}
cout<<cnt1<<endl; // Print the cnt 
    return 0;
}