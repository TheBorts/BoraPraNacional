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

int main(){

    int n = 0;
    cin >> n;

    

    if (n < 4 && n != 1){
        cout << "NO SOLUTION" << endl;
    } else {
        for (int i = 2; i <= n; i+=2){
            cout << i << " ";
        }
        for (int i = 1; i <= n; i+=2){
            cout << i << " ";
        }
    }

    return 0;
}