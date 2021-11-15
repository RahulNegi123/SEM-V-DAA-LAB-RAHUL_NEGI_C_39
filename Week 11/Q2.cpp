#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int s;
    cin>>s;
    int dp[n+1][s+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
        dp[i][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(j>=v[i-1])
                dp[i][j]=dp[i-1][j]+dp[i][j-v[i-1]];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][s]<<endl;
    return 0;
}