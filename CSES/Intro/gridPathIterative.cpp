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


    bool visited[7][7];

    string line;
    getline(cin, line);

    int count = 0;
    int dist = -1;
    stack<pii> st;

    int d = line.length();
    st.push(pair(0, 0));

    while (! st.empty()){
        pii pos = st.top(); 

        int i = pos.first;
        int j = pos.second;

        if (visited[i][j]){
            st.pop();
            visited[i][j] = 0;
            dist -= 1;
            continue;
        }

        dist += 1;
        visited[i][j] = 1;

        if (dist == d || (i == 6 && j == 0)){
            count += dist == d;
            continue;
        }

        bool vR = j + 1 < 7 && !visited[i][j+1];
        bool vL = j - 1 >= 0 && !visited[i][j-1];
        bool vD = i + 1 < 7 && !visited[i+1][j];
        bool vU = i - 1 >= 0 && !visited[i-1][j];

        char c = line[dist];

        if ((!vD) && (!vU)){
            if (vR && vL){
                continue;
            }
        }
        
        if ((!vR) && (!vL)){
            if (vD && vU){
                continue;
            }
        }

        if (c == '?' || c == 'D'){
            if (vD){
                st.push(pair(i+1, j));
            }
        }
        
        if (c == '?' || c == 'U'){
            if (vU){
                st.push(pair(i-1, j));
            }
        }

        if (c == '?' || c == 'R'){
            if (vR){
                st.push(pair(i, j+1));
            }
        }

        if (c == '?' || c == 'L'){
            if (vL){
                st.push(pair(i, j-1));
            }
        }

    }

    cout << count << endl;

    return 0;
}