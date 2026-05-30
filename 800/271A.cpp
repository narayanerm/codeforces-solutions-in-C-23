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
    int year, distinct_year, alg1, alg2, alg3, alg4;
    bool new_year = false;
    cin >> year;
    distinct_year = year;
    while (new_year == false)
    {
        distinct_year++;
        alg1 = distinct_year / 1000;
        alg2 = distinct_year / 100 - alg1 * 10;
        alg3 = distinct_year / 10 - alg2 * 10 - alg1 * 100;
        alg4 = distinct_year / 1 - alg3 * 10 - alg2 * 100 - alg1 * 1000;
        if (alg1 != alg2 && alg1 != alg3 && alg1 != alg4 && alg2 != alg3 && alg2 != alg4 && alg3 != alg4)
        {
            new_year = true;
        }
    }

    cout << distinct_year;
}