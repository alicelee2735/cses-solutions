#include<bits/stdc++.h>
 
 
using namespace std;
 
struct task{
    int a,d; //a=duration, d= deadline
};
 
bool cmp(task w, task y){
    return w.a<y.a;
}
 
#define ll long long
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
 
    int n;
    cin>>n;
    vector<task> t(n);
    for(auto i =0 ; i < n; ++i){
        cin>>t[i].a>>t[i].d;
    }
    sort(t.begin(),t.end(),cmp);//sort by smallest duration
    ll reward = 0;
    ll f = 0;
    for(auto i =0 ;i < n;++i){
        f+=t[i].a;
        reward += (t[i].d - f);
    }
    cout<<reward;
 
    return 0;
}
