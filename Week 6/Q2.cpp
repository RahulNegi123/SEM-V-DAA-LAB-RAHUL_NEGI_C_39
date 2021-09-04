#include <bits/stdc++.h>
void visited(int** , int, int);
bool bipartite(int** ,int);
int main()
{
	int n;		std::cin >> n;
	int **arr;
    arr = (int **)malloc(n * sizeof(int *));
	for (int i = 0; i < n; i++)
	{
        arr[i] = (int *)malloc(n * sizeof(int));
	}
	for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
	}
	std::cout<<std::endl;

    int t;
    int e;
    std::cin >> t;
    std::cin >> e;
    bool Bipartite1 = bipartite(arr, n);
    if (Bipartite1==true)
    {
        std::cout << "Yes Bipartite\n";
    }
    else
    {	
        std::cout << "Not Bipartite\n";
    }

	return 0;
}
void visited(int **A, int n, int j)
{
	for (int i = 0; i < n; i++)
	{
        if (A[i][j] == 1)
        {
            A[i][j] = 2;
        }
    }
}
bool bipartite(int **A, int n)
{
	std::queue<int> Queue;
    Queue.push(0);
    int adj[n] = {1};
    visited(A, n, 0);
    while (!Queue.empty())
    {
        int v = Queue.front();
        Queue.pop();
        int colnow = adj[v] * -1;
        for (int i=0;i<n;i++)
        {
            if (A[v][i]!=0)
            {
                if (adj[i] == 0)
                {
                    adj[i] = colnow;
                }
                else if (adj[i] != colnow)
                {
                    return false;
                }
                if (A[v][i] == 1)
                {
                    Queue.push(i);
                    visited(A, n, i);
                }
            }
        }
    }
    return true;
}