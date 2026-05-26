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
    int total = 0, price_per_banana, money_on_pocket, total_bananas_desired;

    cin >> price_per_banana;
    cin >> money_on_pocket;
    cin >> total_bananas_desired;
    for (int i = 1; i <= total_bananas_desired; i++)
    {
        total += i * price_per_banana;
    }

    if (total <= money_on_pocket)
        cout << 0;
    else
        cout << total - money_on_pocket;
}