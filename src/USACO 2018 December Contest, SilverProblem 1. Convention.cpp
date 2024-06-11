// https://usaco.org/index.php?page=viewproblem2&cpid=858
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,c;
bool f(int mid, int cows[], int bus, int capa){
    int ix=0;
    capa--;
    bus--;
    for(int i=1; i < n; ++i){
        if(cows[i]-cows[ix] > mid || capa==0) {
            ix = i;
            bus--;
            capa = c;
        }
        capa--;
    }
    return bus >= 0;
}

void solve(){
    ifstream fin("convention.in");
    ofstream fout("convention.out");
    fin >> n >> m >> c;
    int cows[n];
    for(auto &t : cows) fin >> t;
    sort(cows, cows+n);
    int l=0, r=1e9;
    while(r > l){
        int mid = (r-l)/2 +l;
        if(f(mid, cows, m, c)) r=mid;
        else l=mid+1;
    }
    fout << l;
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
