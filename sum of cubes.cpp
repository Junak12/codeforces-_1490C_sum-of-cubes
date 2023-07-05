#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define opt()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
bool sum(ll n)
{
    ll x=cbrt(n);
    if(x*x*x==n)
    {
        return false;
    }
    for(ll i=1;i<=x;i++)
    {
        ll a=i*i*i;
        ll b=n-a;
        ll y=cbrt(b);
        if(y*y*y==b)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    opt();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(sum(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
