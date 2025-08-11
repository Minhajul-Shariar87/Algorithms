#include<bits/stdc++.h>
using namespace std;

struct greedy{
float profit,weight;
float valueIndex;
void show_details(){
    cout<<"Profit is: "<<profit<<endl;
    cout<<"Weight is: "<<weight<<endl;
    cout<<"Value Index is: "<<valueIndex<<endl;
    cout<<"----------------------------------------------------"<<endl;
}

};

bool compare(greedy a, greedy b){
return a.valueIndex>b.valueIndex;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
greedy g[n];
float total_weight;
cout<<"Maximum Capacity is: ";
cin>>total_weight;
float c=total_weight;

for(int i=0;i<n;i++){
    cout<<"Enter Profit: ";
    cin>>g[i].profit;
    cout<<"Enter Weight: ";
    cin>>g[i].weight;
cout<<"----------------------------------------------------"<<endl;

}
cout<<"----------------------------------------------------"<<endl;
for(int i=0;i<n;i++){
    g[i].valueIndex=g[i].profit/g[i].weight;
    
}

sort(g,g+n,compare);


for(int i=0;i<n;i++){
    g[i].show_details();
}
float benefit=0;
int i=0;
while(total_weight>0){
if(total_weight>=g[i].weight){
    total_weight=total_weight-g[i].weight;
    benefit=benefit+float(g[i].profit);
    }
    else{
        benefit=benefit+(g[i].profit*(total_weight/g[i].weight));
        total_weight=total_weight-g[i].weight;
    }
    i++;
}
    
    
    
    

cout<<"Benefit is: "<<benefit<<endl;






return 0;

}