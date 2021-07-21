#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
		int N;
		scanf("%d", &N);
		int A[N];
		for (int j=0; j<N; j++)
			scanf("%d", &A[j]);
		int toSearch;
		scanf("%d", &toSearch);
		int flag=0, numOFcompare=0;
		for (int i1=0; i1<N; i1++)
		{
			numOFcompare++;
			if (A[i1]==toSearch)
			{
				flag=1;
				break;
			}

		}
		if (flag==1)
		{
			printf("Present %d\n", numOFcompare);
		}
		else
		{
			printf("Not Present %d\n", numOFcompare);
		}
	}
	return 0;
}