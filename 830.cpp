/* be not afraid of greatness.
some are born great .
some achieve greatness,
and other have greatness thrust upon them .
*/

#pragma GCC optimize("O3")
#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>
using namespace std;

// constant
#define ll long long
#define ff first
#define ss second
#define PI 3.14159265358979323846264338

// loop
#define loop(i, a, n) for (ll i = a; i < n; i++)
#define loop1(i, a, n) for (ll i = a; i <= n; i++)
#define rloop(i, a, n) for (int i = n - 1; i >= a; i--)
#define print(v, i) for (ll i = 0; i < v.size(); i++)
#define form(i, e) for (ll i = 0; i < e; i++)
#define read(v) loop(i, 0, n) cin >> v[i];

// stl
#define vl vector<ll>
#define all(x) x.begin(), x.end()
#define dp(a) cout << a << "\n"
#define dis(a) cout << a << " "
#define pr pair<ll, ll>
#define C(a) cin >> a
#define Cn(a, b) cin >> a >> b
#define w(a) while (a--)
#define ef else if
#define st set<ll>
#define mst multiset<ll>
#define mp map<ll, ll>
#define i(i) iterator i
#define pb push_back

#define vlc vector<char>
#define IT vl::iterator
#define ITC vlc::iterator
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)

/*Silence is the perfect herald of joy. I were but little happy
if I could say how much.—Lady, as you are mine, I am
yours. I give away myself for you and dote upon the exchange.”

“I do love nothing in the world so well as you—is not that strange?”

“I love you with so much of my heart that none is left to protest.”

“I will live in thy heart, die in thy lap, and be buried in thy eyes—and moreover,
I will go with thee to thy uncle’s.”

***Who ever loved, that loved not at first sight**

*/

//*******  This one's for MY LOVE *********you drell in my heart**//////////////

#if !defined(ONLINE_JUDGE) && defined(LOCAL)
#include "my_header\debug.h"
#else
#define dbg(...) ;
#define dbgn(...) ;
#endif

ll n, m, ar[100005], ar2[100005];
string Y = "YES";
string N = "NO";
const ll T = 100000000;


	int countTriplets(vector<ll>nums){
	    ll n = nums.size();
	    vector<ll> v(n,0);
	   
	    ll cnt=0,ans = 0;
	    for(ll i =0; i< n; i++)
	    {
	        for(ll j =i; j< n; j++)
	        {
	            if(nums[j] > nums[i]) v[i] += 1;
	        }
	    }
	    for(ll i =0; i <n; i++)
	    {
	        for(ll j =i; j<n-1; j++)
	        {
                for(int k =j; k< n;k++)
                {
                    if(nums[j] > nums[i] && nums[k] > nums[j]) cnt += v[k];
                }
	            
	        }
	    }
	  
	   return cnt;
	    
	}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    C(t);
    w(t)
    {
        ll n;
        cin>>n;
        vl v(n);
        read(v);
        
        cout<< countTriplets(v);
    }
}
