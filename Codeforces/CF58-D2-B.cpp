/*
    
    Author: TheBorts - Lucas Bortoletto

    Idea:
        - Get all primes up to n using sieve of Eratosthenes
        - Always divide n by the smallest prime factor to get the next coin value.

*/

#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)
#define rloop(i, n) for(int i = n-1; i >=0; i--)
#define pb push_back
#define srt(a) sort(a.begin(), a.end())

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
bool sortB(pair<int, int> i, pair<int, int> j){ return (i.first < j.first);}
bool sortE(pair<int, int> i, pair<int, int> j){ return (i.second < j.second);}

vi sieve(int n){
    vi primes;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            primes.pb(i);
            for(int j = 2*i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

void solve(){

    int n;
    cin >> n;

    if (n < 2){
        cout << n << endl;
        return;
    }

    vi primes = sieve(n);

    vi out;
    out.pb(n);
    

    int k = n;
    int div = 0;

    while (true){
        if (k % primes[div] == 0){
            k = k / primes[div];
            out.pb(k);
            continue;
        }
        if (k == 1) break;

        div++;
    }

    loop(i, out.size()){
        cout << out[i] << ' ';
    }
    cout << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
