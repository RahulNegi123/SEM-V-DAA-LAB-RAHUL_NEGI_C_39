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
		for (int i1=0; i1<N; i1++)
			scanf("%d", &A[i1]);
		int toSearch;
		scanf("%d", &toSearch);
		int num_of_compare=0, flag=0, j, jTEMP;
		for (j=0; j<N; j+=2)
		{
            if (A[j]==toSearch)
			{
				num_of_compare++;
				flag=1;
				break;
			}
			else if (A[j]>toSearch)
			{
                break;
            }
			else
			{
				num_of_compare++;
			}
		}
		jTEMP = j;
        int flag1=0;
		if (flag==1)
			printf("Present %d\n", num_of_compare);
		if (flag==0)
		{
			for (j=j-2; j<=jTEMP; j++)
			{
				if (A[j]==toSearch)
				{

					flag1 = 1;
					break;
				}
			}
			if (flag1==1)
				printf("Present %d\n", num_of_compare);
			if (flag1==0)
				printf("Not Present %d\n", num_of_compare);
		}

    }
	return 0;
}
