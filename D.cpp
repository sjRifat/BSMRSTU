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
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%2==1)
        {
            if(a==1) cout<<-1<<nn;
            else cout<<2<<nn;
        }
        else
        {
            if(a<6) cout<<-1<<nn;
            else cout<<4<<nn;
        }

    }

    return 0;
}
