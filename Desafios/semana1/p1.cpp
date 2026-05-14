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

    int h1, h2, h3, w1, w2, w3;

    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

    int count = 0;
 
    vi mat(9);

    for (int i = 1; i < 31; i++){
        for (int j = 1; j < 31; j++){
            for (int k = 1; k < 31; k++){
                for (int l = 1; l < 31; l++){
                   mat[0] = i;
                   mat[1] = j;
                   mat[3] = k;
                   mat[4] = l;

                   mat[2] = h1 - mat[0] - mat[1];
                   if(mat[2] < 1 || mat[2] > 30) continue;
                   // cout << mat[2] << endl;
                   mat[5] = h2 - mat[3] - mat[4];
                   // cout << mat[5] << endl;
                   if(mat[5] < 1 || mat[5] > 30) continue;
                   mat[6] = w1 - mat[0] - mat[3];
                   // cout << mat[6] << endl;
                   if(mat[6] < 1 || mat[6] > 30) continue;
                   mat[7] = w2 - mat[1] - mat[4];
                   // cout << mat[7] << endl;
                   if(mat[7] < 1 || mat[7] > 30) continue;
                   mat[8] = w3 - mat[2] - mat[5];
                   // cout << mat[8] << endl;
                   if(mat[8] < 1 || mat[8] > 30) continue;

                   if (mat[8] + mat[7] + mat[6] == h3){
                       count++;
                   }
                }
            }
        }
    }
    cout << count << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
