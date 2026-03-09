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
    int n;
    cin >> n;

    
    for (int i = 0; i < (1 << n); i++){
        int num = i ^ (i >> 1);
        string out = "";
        for (int j = n-1; j >= 0; j--){
            out += (num & (1 << j))? '1' : '0';
        }

        cout << out << endl;

        num = num ^ (num << 1);

    }

    return 0;
}