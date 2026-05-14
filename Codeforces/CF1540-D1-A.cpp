/*

    Author: TheBorts - Lucas Bortoletto

    Idea: 
        - Ok, so basicly to minimize the sum of edges distance you need to maximize the negative edges
        - You need every pair of vertices to be linked from the one with the most total distance from 0
            to the one with the least (To calculate this you are going to need a running total vector
            otherwise O(n^2))
        - It is also necessary to come out from the vertex 0 and go to the one with the most distance
            out of all the vertex so that you can end this "main line" on the vertex with least total distance;
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


void solve(){

    int t;
    cin >> t;

    loop(_, t){
        int n;
        cin >> n;
        
        vll a(n, 0);
        loop(i, n) cin >> a[i];

        srt(a);

        ll sum = a[n-1];

        vll s(n, 0);

        for (int i = 1; i < n; i++){
            s[i] = s[i-1] + a[i];
            sum += s[i-1] - a[i]*i;
            // cout << s[i-1] - a[i]*i << endl;
        }

        cout << sum << endl;

    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
