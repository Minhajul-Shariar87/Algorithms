#include<bits/stdc++.h>

using namespace std;

int main(){
float n;
cin>>n;
 float d= abs(n);
//float s= d-int(d);

   string c=to_string(d);
   cout<<c<<endl;

   int sum=0;
//   cout<<c[0]<<end
cout<<c.length()<<endl;
   for(int i=0;i<c.size();i++){
        // cout<<c[i]<<endl;
        if(c[i]!='.'){
           int v= c[i]-'0';
           sum=sum+v;
        }



   }
   cout<<sum<<endl;




}

