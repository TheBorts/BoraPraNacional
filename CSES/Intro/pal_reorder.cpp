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
 
    vi a(26);
    string in;
    getline(cin, in);

    loop(i, in.size()){
        a[in[i]-'A'] += 1;
    }
    
    int odd = -1;

    loop(i,26){
        if (a[i] % 2){
            if (odd != -1){
                cout << "NO SOLUTION" << endl;
                exit(0);
            }
            odd = i;
        }
    }
    

    loop(i,26){
        loop(j, a[i]/2){
            cout << char('A' + i);
        }
    }
    if (odd != -1) cout << char('A' + odd);

    rloop(i, 26){
        loop(j, a[i]/2){
            cout << char('A' + i);
        }
    }
    
    cout << endl;

    return 0;
}