// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main( ) {
    int x,n;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }


    cout<<"Enter a number to search: ";
    cin>>n;
    int j=0;
    int cnt=0;
    bool flag= false;
    while(!v.empty()){


        if(v[j]==n){
            cout<<v[j]<<" value found"<<endl;
            cout<<"Position is: "<<cnt+1<<endl;
            flag=true;
            break;

        }else{
            cnt++;
            v.erase(v.begin());
        }
    }
    if(!flag)
    cout<<n<<" Not Found"<<endl;

    return 0;
}
