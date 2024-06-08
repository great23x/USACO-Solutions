// https://usaco.org/index.php?page=viewproblem2&cpid=690
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
vector<int> v;
bool f(int m){
    int i;
    priority_queue<int,vector<int>,greater<>> pq;
    for(i=0; i < m; ++i){
        pq.push(v[i]);
    }
    for(; i < n; ++i){
        int top = pq.top();
        if(v[i]+top > k) return false;
        pq.pop();
        pq.push(v[i]+top);
    }
    return true;
}
void solve(){
    cin >> n >> k;
    v.resize(n);
    for(auto &t : v) cin >> t;
    int l=0,r=n;
    while(r>l+1){
        int m = (r-l)/2+l;
        if(f(m)) r=m;
        else l=m;
    }
    cout << r;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("cowdance.in", "r", stdin);
    freopen("cowdance.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}