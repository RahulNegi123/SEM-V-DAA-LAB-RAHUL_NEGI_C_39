#include<bits/stdc++.h>

#define mod 1000000007
#define INF 1000000005
#define INFL 1000000000000000005ll
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define pb push_back
#define mp make_pair
#define gcd __gcd
#define pii pair<int, int>
#define vi vector <int>
#define vp vector<pii>
#define ll long long

using namespace std;

// DEBUG
void __PRINT(int x) {cout << x;}
void __PRINT(long x) {cout << x;}
void __PRINT(unsigned x) {cout << x;}
void __PRINT(unsigned long x) {cout << x;}
void __PRINT(unsigned long long x) {cout << x;}
void __PRINT(float x) {cout << x;}
void __PRINT(double x) {cout << x;}
void __PRINT(long double x) {cout << x;}
void __PRINT(char x) {cout << '\'' << x << '\'';}
void __PRINT(const char *x) {cout << '"' << x << '"';}
void __PRINT(const string &x) {cout << '"' << x << '"';}
void __PRINT(bool x) {cout << (x ? "true" : "false");}

template <typename T, typename V>
void __PRINT(const pair<T, V> &x);
template <typename T>
void __PRINT(const vector<T> &x);
template<typename T>
void __PRINT(const T &x);

template<typename T, typename V>
void __PRINT(const pair<T, V> &x) {cout << '{'; __PRINT(x.first); cout << ','; __PRINT(x.second); cout << "}";}
template<typename T, typename V, typename U>
void __PRINT(const tuple<T, V, U> &x) {cout << '{'; __PRINT(get<0>(x)); cout << ','; __PRINT(get<1>(x));cout << ',' << get<2>(x); cout << "}";}
template<typename T>
void _PRINT(const vector<T> &x) {cout << "{";for(int u69=0;u69<x.size();u69++){_PRINT(x[u69]);cout << (u69+1==x.size()?"":",");};cout << "}";}
template<typename T>
void __PRINT(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __PRINT(i); cout << "}";}
void _PRINT() {cout << "]"<<endl;}
template <typename T, typename... V>
void PRINT(T t, V... v) {_PRINT(t); if (sizeof...(v)) cout << ", "; _PRINT(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _PRINT(x)
#else
#define debug(x...)
#endif

int main()
{
    int no=1;
    for (int f = 0; f < no; f++)
    {
        int n;
        cin>>n;
        vi arr(n);
        int sum = 0;
        for(int i=0 ; i<n ; ++i)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        if (sum%2==1)
            cout<<"NO"<<endl;
        else
        {
            sum /= 2;
            vector <vi> dp(n+1, vi (sum+1));
            for(int i=0 ; i<=n ; ++i)
            {
                for(int j=0 ; j<=sum ; ++j)
                {
                    if (j == 0)
                        dp[i][j]=1;
                    else
                        dp[i][j]=0;
                }
            }
            for(int i=1 ; i<=n ; ++i)
            {
                for(int j=0 ; j<=sum ; ++j)
                {
                    if (j-arr[i-1] >= 0)
                        dp[i][j] = max(dp[i-1][j-arr[i-1]],dp[i-1][j]);
                    else
                        dp[i][j] = dp[i-1][j];
                }
            }
            if (dp[n][sum] == 1)
                cout<<"Yes"<<endl;
            else    
                cout<<"NO"<<endl;
        }
    }
    
    return 0;
}