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

typedef struct Node{
    int val;
    Node* next;
}no;

void solve(){

    int n, m;

    cin >> n >> m;
    vi a(n, 0);
    a[0] = 1;
    vector<no*> b(n);
    
    loop(i, n){
        no* novo = new no;
        novo->next = NULL;
        novo->val = -1;
        b[i] = novo;
    }

    loop(i, m){
        int x, y;
        cin >> x >> y;
        x--; y--;
        no* aux = b[x]->next;
        no* nn = new no;
        nn->next = aux;
        nn->val = y;
        b[x]->next = nn;
    }

    queue<int> q;
    q.push(0);
    vi is_in(n, 0);
    is_in[0] = 1; 

    // loop(i, n){
    //     cout << "--" << i << " -> ";
    //     no* now = b[i]->next;
    //     while (now){
    //         cout << now->val << ' ';
    //         now = now->next;
    //     }
    //     cout << endl;
    // }
    vi pai(n, -1);

    while (!q.empty()){
        int i = q.front();
        // cout << i << endl;
        no* now = b[i]->next;
        while (now){
            if (a[i] >= a[now->val]){
                a[now->val] = a[i] + 1;
                pai[now->val] = i;
                if (!is_in[now->val]){
                    q.push(now->val);
                    is_in[now->val] = 1;
                }
            }
            // cout << now << endl;
            now = now->next;
        }
        is_in[i] = 0;
        q.pop();
    }
    

    if (a[n-1] == 0){
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    cout << a[n-1] << endl;

    vi out(a[n-1], -1);
    int i = n-1;
    int j = a[n-1]-1;
    while (i >= 0){
        out[j] = i;
        i = pai[i];
        j--;
    }
    loop(i, a[n-1]) cout << out[i]+1 << ' ';
    cout << endl;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
