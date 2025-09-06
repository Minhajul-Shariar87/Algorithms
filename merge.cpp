#include<iostream>

using namespace std;

void Merge(int L[],int R[],int A[],int nL,int nR){
int i=0,j=0,k=0;
while(i<nL && j<nR){
    if(L[i]<=R[j]){
            A[k]=L[i];
    i++;

    }else{
    A[k]=R[j];
    j++;
    }
    k++;
}
while(i<nL){
    A[k]=L[i];

    i++;
        k++;
}
while(j<nR){
    A[k]=R[j];
    j++;
    k++;
}

}

void MergeSort(int A[],int n){
int mid= n/2;
int nL=mid;
int L[mid]={};
int nR= n-mid;

int R[nR]={};
if(n<2)return;
for(int i=0;i<mid;i++){
    L[i]=A[i];
}
for(int j=0;j<nR;j++){
    R[j]=A[mid+j];
}
MergeSort(L,nL);
MergeSort(R,nR);
Merge(L,R,A,nL,nR);

}

void print_array(int arr[],int n){
    cout<<"Array are: ";
for(int i=0;i<n;i++){
    cout<<arr[i];
}
cout<<endl;
}

int main(){
int x;
cin>>x;
int A[x];

for(int i=0;i<x;i++){
    cin>>A[i];
}
print_array(A,x);

 MergeSort(A,x);
 print_array(A,x);


}
