#include<iostream>

using namespace std;
void sorted_array(float arr[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}

cout<<endl;

float s;
cin>>s;
int first= 0;
int last=n-1;
int mid=(first+last)/2;
bool flag=false;

for(float u:arr){
    cout<<u<<" ";
}
cout<<endl;

while(first<=last){
        if(s==arr[mid]){
            cout<<"Found "<<arr[mid]<<"Position is: "<<mid+1<<endl;
            flag=true;
            break;
        }
    else if(s<arr[mid]){
        last=mid-1;
    }else if(s>arr[mid]){
    first=mid+1;
    }
    mid=(first+last)/2;

}
if(!flag){
    cout<<"No data Found"<<endl;
}


}
int main(){
int n;
cin>>n;
float  arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
sorted_array(arr,n);


}
