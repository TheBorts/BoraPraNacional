#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define MOD 1000000007

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

int main(){
    ll n;
    cin >> n;

    ll count5 = 0;
    ll ant = n;

    while (ant > 0){
        ant = ant/5;
        count5 += ant;
    }

    cout << count5 << endl;

    return 0;
}