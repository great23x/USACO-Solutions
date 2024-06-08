// https://usaco.org/index.php?page=viewproblem2&cpid=894
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ifstream fin("planting.in");
    ofstream fout("planting.out");
    int n; fin >> n;
    map<int,vector<int>> graph;
    for(int i=1; i < n; ++i){
        int s,e;
        fin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }
    int maxV=0;
    for(auto &v : graph){
        maxV = max(maxV, (int)v.second.size());
    }
    fout << maxV+1;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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