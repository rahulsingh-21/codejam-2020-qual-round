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
class rrr{
    public:
    int a1;
    int a2;
    int a3;
};
void mov(rrr *a,rrr *b)
{
    rrr x=*a;
    *a=*b;
    *b=x;
}
void Sort(rrr a[],int n)
{
    REP(i,0,n-2)
    {
        REP(j,0,n-i-2)
        {
            if(a[j].a1>a[j+1].a1)
            mov(&a[j],&a[j+1]);
        }
    }
}
string match(rrr *a,int n, int x, int y)
{
    if(n==0)
    return "";
    string s="";
    if(a[0].a1>=x)
    {
        x=a[0].a2;
        s=match(a+1,n-1,x,y);
        if(s=="IMPOSSIBLE")
        return "IMPOSSIBLE";
        s+="C";
    }
    else if(a[0].a1>=y)
    {
        y=a[0].a2;
        s=match(a+1,n-1,x,y);
        if(s=="IMPOSSIBLE")
        return "IMPOSSIBLE";
        s+="J";
    }
    else
    return "IMPOSSIBLE";
    return s;
}
int main()
{
    int t;
    cin>>t;
    int m;
    for(m=1;m<=t;m++)
    {
        ll n;
        cin>>n;
        rrr *a=new rrr[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i].a1>>a[i].a2;
            a[i].a3=i;
        }
        Sort(a,n);
        cout<<"Case #"<<m<<": ";
        string s=match(a,n,-1,-1);
        if(s=="IMPOSSIBLE")
        cout<<s;
        else
        {
            unordered_map<int,char> m;
            REP(i,0,n-1)
            {
                m[a[i].a3]=s[n-i-1];
            }
            REP(i,0,n-1)
            {
                cout<<m[i];
            }
        }
        cout<<endl;
    }
}