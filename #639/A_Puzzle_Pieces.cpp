#include <bits/stdc++.h>

#define ll long long int
#define pii pair <int, int>
#define vl vector<ll>
#define vi vector<int>
#define mii map<int,int>
#define pb push_back
#define pop_f pop_front
#define pop_b pop_back
#define ap append
#define fr(s, f) for (ll i = (ll)s ; i < (ll)f ; i++)
#define fn(s, f) for (ll j = (ll)s; j < (ll)f; j++)
#define frn(s, f) for (ll i = (ll)s; i >= (ll)f; i--)
#define fnr(s, f) for (ll j = (ll)s; j >= (ll)f; j--)
#define all(x) (x).begin(), (x).end()
#define siz(x) (int)(x).size()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll x = min(m, n);
        if (x == 1) {
            cout << "YES\n";
        }
        else if (m == 2 && n == 2) {
                cout << "YES\n";
        } else {
            cout << "NO\n";
        } 
    }

    return 0;
}