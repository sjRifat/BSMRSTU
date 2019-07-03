#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		ss              ' '
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll a,b,c=0,i,j,t,k,m,n,o,ar[18],x,y,z;
    cin>>a;
    n=14;
    while(n--)
    {
        cin>>b;
        a=lcm(a,b);
    }
    cout<<a<<nn;

}
