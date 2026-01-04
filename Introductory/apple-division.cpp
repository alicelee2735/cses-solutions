#include<bits/stdc++.h>
 
using namespace std;
int n;
long long total;
vector<long long> apples(25);
long long diff = 1e18;
 
void search(int index,long long sumA){
 
    if(index==n){
       diff = min(diff,abs(2*sumA-total));
    }
    else{
        search(index+1,sumA+apples[index]);
        search(index+1,sumA);
    }
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin>>n;
    for(auto i = 0 ;i<n;++i){
        cin>>apples[i];
        total+=apples[i];
    }
    search(0,0);
    cout<<diff;
 
 
    return 0;
}
