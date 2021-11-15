#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define lli long long int
#define ld long double
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define endl "\n"
const ld pi=3.14159265358979323844;
const lli inf=1e18;
const lli N=1e5+1;
const lli M=1e9+7;
int dp[500][500];
int mcm(vector<int>&v,int i,int j)
{
    if(i==j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    dp[i][j]=INT_MAX;
    for(int k=i;k<j;k++)
        dp[i][j]=min(dp[i][j],(mcm(v,i,k)+mcm(v,k+1,j)+v[i-1]*v[k]*v[j]));
    return dp[i][j];
}
int main()
{
    vector<int> v;
    int a,b,n;
    cin>>n>>a>>b;
    v.pb(a);
    v.pb(b);
    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.pb(y);
    }
    memset(dp,-1,sizeof(dp));
    cout<<mcm(v,1,n)<<endl;
    return 0;
}