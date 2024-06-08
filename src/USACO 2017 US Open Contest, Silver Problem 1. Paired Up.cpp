// Problem link: https://usaco.org/index.php?page=viewproblem2&cpid=738
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    freopen("pairup.in","r",stdin);
    freopen("pairup.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<pair<ll,ll>> v;
    while(n--){
        ll x,y;
        cin >> x >> y;
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    int l=0,r=v.size()-1;
    ll max_sum = 0;
    while(l < r){
        if(v[l].second==0) l++;
        if(v[r].second==0) r--;
        max_sum = max(max_sum,(v[l].first+v[r].first));
        v[l].second--;
        v[r].second--;
    }
    cout << max_sum;
}