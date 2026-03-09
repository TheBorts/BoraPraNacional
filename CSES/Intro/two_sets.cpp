#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n; i > 0; i--)

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;

int main(){

    ll n;
    cin >> n;

    ll sum = (n*(n+1))/2;

    if ((sum % 2)){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        sum = sum/2;
        vi out1(n);
        ll count = 0;
        ll last = 0;
        rloop(i, n){
            sum -= i;
            out1[count] = i;
            count++;
            if (sum < i){
                last = i;
                if (sum == 0) break;
                out1[count] = sum;
                count ++;
                break;
            }
        }
        cout << count << endl;
        loop(i, count){
            cout << out1[i];
            if (count - 1 != i) cout << " ";
        }
        cout << endl;
        cout << n-count << endl;
        for(int i = 1; i < last; i++){
            if (i == sum) continue;
            cout << i;
            if (i + 1 != last) cout << " ";
        }
    }

    return 0;
}