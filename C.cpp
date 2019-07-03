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
    vll v;
    cin>>n>>k;
    if(k%2==1)
    {
        x=(k*(k+1))/2;
        if(n%k!=0 || n<x) cout<<"NO";
        else
        {
            y=n/k;
            v.pb(y);
            i=1;
            while(c!=k/2)
            {
                c++;
                v.pb(y+i);
                v.pb(y-i);
                i++;
            }
            sort(all(v));
            cout<<"YES"<<nn;
            for(i=0;i<v.size()-1;i++)
                cout<<v[i]<<ss;
            cout<<v[v.size()-1];
        }
    }
    else
    {
        x=(k*(k+1))/2;
        if((n-x)%k!=0 || n<x) cout<<"NO";
        else
        {
            y=n/k;
            i=0;
            while(c!=k/2)
            {
                c++;
                v.pb(y-i);
                i++;
            }
            i=1;
            c=0;
            while(c!=k/2)
            {
                c++;
                v.pb(y+i);
                i++;
            }
            sort(all(v));
            cout<<"YES"<<nn;
            for(i=0;i<v.size()-1;i++)
                cout<<v[i]<<ss;
            cout<<v[v.size()-1];
        }
    }

    return 0;
}
