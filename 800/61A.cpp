#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
const ll INF = 2e18;
const int INF32 = 2e9;
const ll MOD = 1e9 + 7;
#ifdef LOCAL
#define dbg(x) cerr << #x << "=" << x << "\n"
#else
#define dbg(x)
#endif

signed main()
{
    int x;
    string original, corrections;
    cin >> original;
    cin >> corrections;
    for (int i = 0; i < original.size(); i++)
    {
        if (corrections[i] == '1' && original[i] == '1')
            original[i] = '0';
        else if (corrections[i] == '1' && original[i] == '0')
            original[i] = '1';
        cout << original[i];
    }
}