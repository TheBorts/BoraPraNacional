#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;


int main(){

    int t = 0;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n = 0, k = 0, p = 0;
        cin >> n >> k >> p;
        if (k < 0){
            k *= -1;
        }
        if (p < 0){
            p *= -1;
        }
        int num = k / p;
        if (k % p != 0){
            num++;
        }
        if (num > n){
            cout << -1 << endl;
        }
        else{
            cout << num << endl;
        }
    }
    

    return 0;
}