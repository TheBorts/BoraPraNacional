#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define MOD 1000000007

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vc = vector<char>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

ll sum = 0;

void rec(ll size, int onde, int praonde, int empt){
    if (size == 1){
        cout << onde << ' ' << praonde << endl;
        sum ++;
        return;

    }

    rec(size - 1, onde, empt, praonde);

    cout << onde << " " << praonde << endl;
    sum++;

    rec(size-1, empt, praonde, onde);
}



int main(){

    ll n;
    cin >> n;


    cout << (1<<n)-1 << endl;

    rec(n, 1, 3, 2);

    return 0;
}