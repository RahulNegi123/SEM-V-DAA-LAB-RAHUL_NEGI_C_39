#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >>m;
	vector<pair<int,int>> adj[n];
	int u,v,wt;
	for(int i=0;i<m;i++)
	{
		cin >> u >> v >> wt;
		adj[u].push_back(make_pair(v,wt));
		adj[v].push_back(make_pair(u,wt));
	}
	int parent[n];
	bool mstSet[n];
	int key[n];
	for(int i=0;i<n;i++)
	{
		key[i]=INT_MAX;
		mstSet[i]=false;
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>> >pq;

	key[0]=0;
	parent[0]=-1;
	pq.push({0,0});
	while(!pq.empty())
	{
		int temp=pq.top().second;
		pq.pop();
		mstSet[temp]=true;
		for(auto it: adj[temp])
		{
			int temp2=it.first;
			int weight=it.second;
			if(mstSet[temp2]==false and weight < key[temp2])
			{
				parent[temp2]=temp;
				key[temp2]=weight;
				pq.push({key[temp2],temp2});
			}
		}
	}
	int sum=0;
	sort(key,key+n);
	for(int i=0;i<n-1;i++)
		sum+= key[i];
	cout << sum << endl;
}