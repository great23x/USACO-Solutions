// Problem link: https://usaco.org/index.php?page=viewproblem2&cpid=915
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int min1=b-a-1,min2=c-b-1,maxm=max((c-b),(b-a))-1;
    if(!min1 && !min2){
        cout << 0;
    }
    else if(min1==1 || min2==1){
        cout << 1;
    }
    else
        cout << 2;
    cout <<"\n" << maxm;
}