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
using vpi = vector<pii>;
using vll = vector<ll>;

int main(){

    int n, m;
    cin >> n >> m;

    loop(i, n){
        loop(j, m){
            char c;
            cin >> c;
            int count = (i + j)%2;

            if (count){
                if (c == 'B'){
                    cout << 'D';
                }else{
                    cout << 'B';
                }
            }else{
                if (c == 'A'){
                    cout << 'C';
                }else{
                    cout << 'A';
                }
            }
        }
        cout << endl;
    }




    return 0;
}