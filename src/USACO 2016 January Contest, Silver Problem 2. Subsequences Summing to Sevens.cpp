// https://usaco.org/index.php?page=viewproblem2&cpid=595
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<ll> ps(n+1);
    for(int i=1; i<=n; ++i){
        int x; cin >> x;
        ps[i] = (ps[i-1]+x)%7;
    }
    int ans=0;
    vector<int> found(7,-1);
    for(int i=1; i<=n; ++i){
        if(found[ps[i]]==-1)
            found[ps[i]]=i;
        else
            ans = max(ans,i-found[ps[i]]);
    }
    cout << ans;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
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