#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
#define test int testcase; cin>>testcase; while(testcase--)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define deci(n) fixed << setprecision(n)
#define REP(i,a,b) for(ll i=a;i<=b;++i)
#define REV(i,a,b) for(ll i=a;i>=b;i--)
#define pll pair<ll,ll>
#define vll vector<ll>
#define sll set<ll>
#define F first
#define S second
#define mp make_pair
#define pb push_back
int check(int x[],int n)
{
    ll a=0,b=0;
    REP(i,0,n-1)
    {
       REP(j,i+1,n-1)
       {
           if(x[i]==x[j])
           a++;
       }
    }
    a>0 ? b=1 : b=0;
    return b;
}    
int main()
{
    int t;
    cin>>t;
    int m;
    for(m=1;m<=t;m++)
    {
        int n;
        cin>>n;
        int a[n][n];
        REP(i,0,n-1)
        {
            REP(j,0,n-1)
            {
                cin>>a[i][j];
            }
        }
        ll k=0;
        REP(i,0,n-1)
        {
            REP(j,0,n-1)
            {
                if(i==j)
                k+=a[i][j];
            }
        }
        ll rowcount=0,rc=0;
        REP(i,0,n-1)
        {
            int x[n];
            REP(j,0,n-1)
            {
            x[j]=a[i][j];
            }
            ll l=check(x,n);
            if(l==1)
            rowcount++;
        }
        ll colcount=0,cc=0;
        REP(i,0,n-1)
        {
            int x[n];
            REP(j,0,n-1)
            {
            x[j]=a[j][i];
            }
            ll l=check(x,n);
            if(l==1)
            colcount++;
        }
        cout<<"Case #"<<m<<": "<<k<<" "<<rowcount<<" "<<colcount<<endl;
    }
}