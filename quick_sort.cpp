#include<bits/stdc++.h>

using namespace std;

void quick_sort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int pivot=arr[0];
    int i=low;
    int j=high;
    int cnt=0;

    while(i<=j){

        while(pivot>=arr[i]){
            i++;

        }
        while(pivot<arr[j]){
            j--;

        }
        //cout<<i<<" "<<j<<endl;
        if(i<=j && arr[i]>arr[j]){
         swap(arr[i],arr[j]);
        }



    }
  swap(arr[0],arr[j]);
  //cnt=j+1;
  //cnt=n;

  quick_sort(arr,low,j-1);
  quick_sort(arr,j+1,high);


}

int main(){
    int s;
    cin>>s;
    int arr[s];

    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=s-1;
    quick_sort(arr,low,high);
    for(int u:arr){
    cout<<u<<" ";
    }
    cout<<endl;
}
