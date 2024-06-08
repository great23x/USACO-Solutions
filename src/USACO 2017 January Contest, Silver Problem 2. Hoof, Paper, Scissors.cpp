// https://usaco.org/index.php?page=viewproblem2&cpid=691
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<vector<int>> ps(3,vector<int>(n+1));
    for(int i=1; i <= n; ++i){
        char c; cin >> c;
        ps[0][i] = ps[0][i-1] + (c=='H');
        ps[1][i] = ps[1][i-1] + (c=='P');
        ps[2][i] = ps[2][i-1] + (c=='S');
    }
    ll maxScore=0;
    for(int i=0; i < n; ++i){
        ll beforeSwitch = max({ps[0][i],ps[1][i],ps[2][i]});
        ll afterSwitch = max({ps[0][n] - ps[0][i], ps[1][n] - ps[1][i], ps[2][n]-ps[2][i]});
        maxScore = max(maxScore,beforeSwitch+afterSwitch);
    }
    cout << maxScore;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
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