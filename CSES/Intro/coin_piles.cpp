#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define MOD 1000000007

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

int main(){

    ull t;
    cin >> t;

    ull e, d;

    loop(i, t){
        cin >> e >> d;
        if ((e % 3) == 2*(d % 3) || 2*(e % 3) == (d % 3)){
            if((e/2 <= d) && (d/2 <= e)){
            cout << "YES" << endl;
            continue;
            }
        }
        cout << "NO" << endl;

    }

    return 0;
}