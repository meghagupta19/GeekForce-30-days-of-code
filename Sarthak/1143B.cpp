// Date- 14/01/2021
// Problem Link- https://codeforces.com/problemset/problem/1143/B, rated 1200

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll digitproduct(ll x){
    if(x <= 0)
        return 0;
    ll prod(1);
    while(x > 0)
        prod *= (x % 10); x /= 10;
    return prod;
}


int main(){

    ll n; 
    cin >> n;
    ll res = digitproduct(n);
    for(ll p = 1; p <= n; p *= 10)
    {
        ll cur = (n / p) * p;
        ll check = digitproduct(cur - 1);
        res = (res > check) ? res : check;
    }
    cout << res << endl;
    return 0;
}