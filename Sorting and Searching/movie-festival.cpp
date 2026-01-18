#include<bits/stdc++.h>
 
 
using namespace std;
 
#define ll long long
 
struct movie{
    ll a, b;
};
bool cmp(movie w, movie y){
    return w.b<y.b;
}
 
int main(){
    int n;
    cin>>n;
    vector<movie> m(n);
    for(auto i = 0; i < n; ++i){
        cin>>m[i].a>>m[i].b;
    }
 
    sort(m.begin(),m.end(),cmp);
 
    int watch = 1;
    int tmpb = m[0].b;
    for(auto i =1 ;i < n ; ++i){
        if(m[i].a>=tmpb){ 
            watch++;
            tmpb = m[i].b;
        }
    }   
 
    cout<<watch;
 
    return 0;
}
