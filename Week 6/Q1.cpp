#include <bits/stdc++.h>
bool dfs(int**, int, int, int);
void visited(int **, int, int);
int main()
{

	int n; 		std::cin >> n;
	int **arr;
	arr = (int **)malloc(n * sizeof(int *));

	for (int i = 0; i < n; ++i)
	{
        arr[i] = (int *)malloc(n * sizeof(int));
	}

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    int t;
    int e;
    std::cin >> t;
    std::cin >> e;

    bool present = dfs(arr, n, t-1, e-1);
    if (present==true)
    {
    	std::cout<<"Yes Path Exists\n";
    }
    else
    	std::cout<<"No Such Path Exists\n";

	return 0;
}

void visited(int **A, int n, int j)
{
	for (int i=0; i<n; i++)
	{
		A[i][j]=2;
	}
}
bool dfs(int **A, int n, int t, int e)
{
    std::vector<int> da;
    da.push_back(t);
    visited(A, n, t);
    while (!da.empty())
    {
        int x = da.back();
        da.pop_back();
        if (A[x][e] == 1)
            return true;
        else
        {
            for (int i = 0; i<n; i++)
            {                
            	if (A[x][i] == 1)
            	{
                    da.push_back(i);
            	}
            }
            visited(A, n, x);
        }
    }
    return false;
}
