#include <bits/stdc++.h>

using namespace std;


int dpa(long int atual, vector<long int> coins, vector<long int> val, long int x, int n){
    if(atual > x){
        return 0;
    }
    if(val[atual] != 0){
        return val[atual];
    }


    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += dpa(atual + coins[i], coins, val, x, n);
    }

    val[atual] = ans;

    return ans;
}

int main(){
    long int n, x;
    cin >> n >> x;
    vector<long int> coins(n);

    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }

    vector<long int> dp(x+1, 0);
    dp[x] = 1;

    long int jeitos;
    jeitos = dpa(0, coins, dp, x, n);

    cout << jeitos << endl;

    return 0;
}