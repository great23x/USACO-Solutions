// Problem link: https://usaco.org/index.php?page=viewproblem2&cpid=892
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    freopen("sleepy.in","r",stdin);
    freopen("sleepy.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for(auto &t : v)
        cin >> t;
    int outofpos=-1;
    for(int i = 0; i < n-1; ++i){
        if(v[i] > v[i+1])
            outofpos = i;
    }
    cout << (outofpos!=-1 ? outofpos+1 : 0);
}