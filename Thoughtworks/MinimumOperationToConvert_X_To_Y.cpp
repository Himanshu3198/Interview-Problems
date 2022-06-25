/*
 minimum number of operation need to convert x to y in one operation  you can change
 if x is even x=2*x or x=x/2 .
 else if x is odd change x to x=2*x or x=3*x=1
 constraints x>=1 && x<=10^9, y>=1 && y<=10^9
 
*/


/*
 author:himanshu3198

*/
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long int>>
#define INF 1e18
#define _Y puts("YES")
#define _N puts("NO")
#define showArr(v)         \
    for (auto it : v)      \
        cout << it << " "; \
    cout << E;
#define Print(ans) cout << ans << E;
#define sz(s) s.size();
#define Nitro()                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int solve()
{

    ll x = 7, y = 4;
    //  cin>>x>>y;
    int ans=INT_MAX;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> minHeap;
    //  queue<pair<int,int>>minHeap;
    minHeap.push({0, x});
    set<ll> vis;
    while (!minHeap.empty())
    {

       
            ll count = minHeap.top().first;
            ll num = minHeap.top().second;
            minHeap.pop();

            if (num == y)
                return count;

            vis.insert(num);
            if (num % 2 == 0)
            {

                ll option1 = num * 2;
                ll option2 = num / 2;
                if (!vis.count(option1) && num>0)
                {
                    minHeap.push({count + 1, option1});
                }
                if (!vis.count(option2) && num>0)
                {
                    minHeap.push({count + 1, option2});
                }
            }
            else
            {
                ll option3 = num * 2;
                ll option4 = 3 * num + 1;
                if (!vis.count(option3) && num>0)
                {
                    minHeap.push({count + 1, option3});
                }
                if (!vis.count(option4) && num>0)
                {
                    minHeap.push({count + 1, option4});
                }
            }
        
    }
    return 0;
}

int main()
{
    Nitro();
    int t = 1;
    // cin >> t;

    while (t--)
    {

        cout << solve() << E;
    }

    return 0;
}
