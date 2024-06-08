// Problem link: https://usaco.org/index.php?page=viewproblem2&cpid=809
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v(n);
    for(auto &t : v)
        cin >> t;
    for(int i = n-1; i >= 0; --i){
        bool ok=true;
        if(v[i] != -1){
            int c=v[i]-1;
            for(int j= i-1; j > i-v[i]; --j) {
                if(v[j] == -1) v[j] = c;
                if(v[j]!=c) ok=false;
                c--;
                if(!ok){
                    cout << -1;
                    return 0;
                }
            }
        }
        if(i && v[i]==1) v[i-1]=0;
    }
    if(v[0]==-1) v[0]=0;
    int min=0,max=0;
    for(auto &t : v) {
        if(!t) min++;
        if(t==-1) max++;
    }
    cout << (min) << " " << max+min;

}