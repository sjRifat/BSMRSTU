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
    ll a,b,c,i,j,t,k,m,n,o,even=0,odd=0,x,y,z;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&a);
        if(a%2==0)
            even++;
        else
            odd++;
    }
    x=((even-2)*(even-1)*even)/6;
    y=(((odd)*(odd-1))/2)*even;
    cout<<x+y<<nn;

    return 0;
}
