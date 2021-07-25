#include <stdio.h>
int main()
{
	int T;	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
	    int first, second, third;
		int N;	scanf("%d", &N);
		int A[N];
		for (int i1=0; i1<N; i1++)
			scanf("%d", &A[i1]);
		int flag=0, flag1=0;;
		for (first=0; first<N; first++)
		{
			for (second=first+1; second<N; second++)
			{
				for (third=first+1; third<N; third++)
				{
					if (A[first]+A[second]==A[third])
					{
						flag=1;
						break;
					}
				}
				if (flag==1)
				{
					flag1=1;
					break;
				}
			}
			if (flag1==1)
				break;
		}
		if (flag==1)
			printf("%d %d %d\n",first+1, second+1, third+1);
		else
			printf("No sequence found.\n");
	}
	return 0;
}
