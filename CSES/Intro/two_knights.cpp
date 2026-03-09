#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 1; i <= n; i++)

using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

int main(){

    ll n;
    cin >> n;

    loop(i, n){
        if (i == 1){
            cout << 0 << endl;
            continue;
        }
        if (i == 2){
            cout << 6 << endl;
            continue;
        }
        if (i == 3){
            cout << 28 << endl;
            continue;
        }if (i == 4){
            cout << 96 << endl;
            continue;
        }

        ull corners = 8;
        ull corner2 = 4;
        ull sides2 = 4 * (i - 4);
        ull sides1 = 4 * (i - 4);
        ull middle = (i-4) * (i-4);
    
        ull total = 0;
    
        ull n2 = i*i;
    
        total += corners * (n2-4);
        total += corner2 * (n2-5);
        total += corner2 * (n2-3);
        total += sides2 * (n2-7);
        total += sides1 * (n2-5);
        total += middle * (n2-9);

        cout << total/2 << endl;
    }

    
    


    return 0;
}