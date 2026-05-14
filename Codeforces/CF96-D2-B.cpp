/*

    Author: TheBorts - Lucas Bortoletto

    Idea:
        - We can generate the lucky numbers in increasing order, and stop when we find the first one that is greater than or equal to n.
        - We also have to take into consideration that the lucky number must have an equal number of 4's and 7's,
            so we can generate the lucky numbers with a certain number of digits,
            and then check if they are greater than or equal to n.
        - If the number has a odd number of digits, we know for sure that the next lucky number will have an even number of digits, so we
            can just generate the lucky numbers with an even number of digits.
        - If the number has an even number of digits but is greater than the largest lucky number with that number of digits, we can just
            generate the lucky numbers with the next even number of digits.
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

    ll n;
    cin >> n;

    int len = trunc(log10(n)) + 1;
   
    string now;
    loop(i, len/2) now += "4";
    int b = len - now.size();
    loop(i, b) now += "7";
    
    int up = 2 - (len % 2);

    if (up == 1){
        now = "4" + now;
        cout << now << endl;
        return;
    }

    string test;
    loop(i, len/2) test += "7";
    loop(i, b) test += "4";

    if (n > stoll(test)) {
        if (up == 2){
            now += "7";
        }
        now = "4" + now;
        
        cout << now << endl;
        return;
    }

    int i = 0;
    while(true){
        if (stoll(now) >= n && count(now.begin(), now.end(), '7') == count(now.begin(), now.end(), '4')) break; 
        
        while(true){
            if (now[now.size()-1-i] == '4'){
                now[now.size()-1-i] = '7';
                break;
            }
            now[now.size()-1-i] = '4';
            i++;
        }

        i = 0;

    }
    
    cout << now << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
