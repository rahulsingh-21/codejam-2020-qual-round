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
#define MAX 1000000
int main()
{
    int t;
    cin>>t;
    int m;
    for(m=1;m<=t;m++)
    {
        string s,s1,b1="(",b2=")";
        cin>>s;
        s1=s;
        int n=s.length(),j=0,flag=0;
        REP(i,0,n-1)
        {
            
            if(s[i]=='1'&&flag==0)
            {
                s1.insert(j,b1);
                j++;
                flag=1;
            }
            if(s[i]=='1'&&flag==1)
            {
                if(s[i+1]==0)
                {
                    s1.insert(j+1,b2);
                    j++;
                    flag=0;
                }
            }
            if(s[i]=='0'&&s[i-1]=='1')
            {
                s1.insert(j,b2);
                j++;
                flag=0;
            }
            j++;
        }
        cout<<"Case #"<<m<<": "<<s1<<endl;
    }
}