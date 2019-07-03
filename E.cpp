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
        ll s1=0,s2=0;
        scanf("%lld",&a);
        for(i=1; i<=a/2; i++)
        {
            if(a%i==0)
                s1++;
        }
        printf("%lld\n",s1+1);
    }

    return 0;
}
