#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
	int n;
    cin>>n;
    set<int> x;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        x.insert(a);
    }
    cout<<x.size();
 
 
 
    return 0;
}
