//Problem link: http://usaco.org/index.php?page=viewproblem2&cpid=1203
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n,maxe=-2e9,sum=0; cin >> n;
    vector<int> v(n);
    set<int> s;
    for(auto &t : v) {
        cin >> t;
        maxe = max(maxe,t);
        sum += t;
        s.insert(t);
    }
    if(s.size()==1){
        cout << 0 <<"\n";
        return;
    }
    for(int target = maxe; target <= sum; ++target){
        vector<int> cpy = v;
        map<int,int> mp;
        for(int i = 0; i < n-1; ++i){
            if(cpy[i] + cpy[i+1] <= target){
                cpy[i+1] += cpy[i];
                cpy[i] = 0;
            }
        }
        for(auto &t : cpy)
            if(t) mp[t]++;
        if(mp.size()==1){
            cout << n - (sum/target) <<"\n";
            return;
        }
    }
}
int main() {
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}