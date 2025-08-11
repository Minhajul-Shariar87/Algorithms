#include<bits/stdc++.h>

using namespace std;

int main(){
float n;
cin>>n;
float s= n-int(n);

if(n>0){
        int cnt=0;
string x=to_string(int(n));
if(x.length()==4){
    if(s>0){

        cout<<"Error"<<endl;

}else{
if((int(n)%4==0 && int(n)%100!=0)||int(n)%400==0){
        cout<<"Leap Year"<<endl;
    }else{
    cout<<"Not Leap Year"<<endl;
    }
}
}
else if(x.length()<4 || x.length()>4){
    cout<<"Error Size"<<endl;
}


}else{
cout<<"Error"<<endl;

}


}

