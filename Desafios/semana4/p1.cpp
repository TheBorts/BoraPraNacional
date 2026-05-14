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

int bin_l(vi a, int l, int r, int i,int d){
    if (a[i] - a[l] <= d){
        return l;
    }

    while (r - l > 1){
        int mid = (l+r)/2;

        if (a[i] - a[mid] <= d){
            r = mid;
        }else{
            l = mid;
        }
    }

    return r;
}

int bin_r(vi a, int l, int r, int i,int d){
    if (a[r] - a[i] <= d){
        return r;
    }


    while(r-l > 1){
        int mid = (l + r)/2;
        
        if (a[mid] - a[i] <= d){
            l = mid;
        }else{
            r = mid;
        }
    }

    return l;
}

void solve(){

    int n, q;
    cin >> n >> q;

    vi p(n);

    loop(i, n) cin >> p[i];

    loop(_, q){
        int i, s;
        cin >> i >> s;
        i -= 1;
        int last = -1;
        bool r = true;
        int same_count = 0;
        while(last != i || same_count < 2){
            last = i;
            // cout << "To no " << i << "com tamanho " << s << endl; 

            if (r){
                i = bin_r(p, i, n-1, i, s);
            }else{
                i = bin_l(p, 0, i, i, s);
            }
            s = s - abs(p[last] - p[i]);
            r = 1-r;
            if (last == i){
                same_count += 1; 
            }else{
                same_count = 0;
            }
        }
        
        cout << i+1 << endl;
    }

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
