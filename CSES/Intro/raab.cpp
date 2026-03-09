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

    int t = 0;
    cin >> t;
    loop(i, t){
        int n, a, b;
        cin >> n >> a >> b;
        int draws = n - a - b;
    
        if (a+b > n || (n - draws == max(a, b)) && draws != n){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        
        for(int i = n; i > 0; i--){
            cout << i << " ";
        }

        cout << endl;
        
        for(int i = n; i > n-draws; i--){
            cout << i << " ";
        }
        
        for(int i = n-draws-b; i > 0; i--){
            cout << i << " ";
        }

        for(int i = n - draws; i > n - draws - b; i--){
            cout << i << " ";
        } 
        cout << endl;
    }

    return 0;
}