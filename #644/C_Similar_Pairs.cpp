#include <bits/stdc++.h>

#define ll long long int
#define pii pair<int, int>
#define vl vector<ll>
#define vi vector<int>
#define mii map<int, int>
#define pb push_back
#define pop_f pop_front
#define pop_b pop_back
#define ap append
#define fr(s, f) for (ll i = (ll)s; i < (ll)f; i++)
#define fn(s, f) for (ll j = (ll)s; j < (ll)f; j++)
#define frn(s, f) for (ll i = (ll)s; i >= (ll)f; i--)
#define fnr(s, f) for (ll j = (ll)s; j >= (ll)f; j--)
#define all(x) (x).begin(), (x).end()
#define siz(x) (int)(x).size()

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        int e = 0, o = 0;
        fr(0, n)
        {
            cin >> a[i];
            if (a[i] & 1)
                o++;
            else 
                e++;
        }
        if (e % 2 == 0 && o % 2 == 0 ) 
            cout << "YES\n";
        else {
            sort(all(a));
            fr(1, n) {
                if (a[i] == a[i - 1] + 1) {
                    o--;
                    e--;
                    cout << "YES\n";
                    break;
                }
            }
            if (e & 1) {
                cout << "NO\n";
            }   
        }
    }
    return 0;
}