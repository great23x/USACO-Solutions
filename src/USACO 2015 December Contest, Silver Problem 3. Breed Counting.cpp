// https://usaco.org/index.php?page=viewproblem2&cpid=572
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q; cin >> n >> q;
    vector<ll> in(n);
    vector<vector<ll>> v(3,vector<ll>(n+1));
    for(auto &t : in) cin >> t;
    for(int t=0; t<3; ++t){
        for(int i=1; i<=n; ++i){
            v[t][i] = v[t][i-1]+(in[i-1]==t+1);
        }
    }
    while(q--){
        int l,r; cin >> l >> r;
        cout << v[0][r] - v[0][l-1] << " ";
        cout << v[1][r] - v[1][l-1] << " ";
        cout << v[2][r] - v[2][l-1] << "\n";
    }
    return 0;
}