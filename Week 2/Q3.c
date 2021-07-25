#include <stdio.h>
#include <math.h>
int main()
{
	int T;	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
	    int first, second;
		int N;	scanf("%d", &N);
		int A[N];
		for (int i1=0; i1<N; i1++)
			scanf("%d", &A[i1]);
		int key;	scanf("%d", &key);
		int flag=0, flag1=0, answer=0;
		for (first=0; first<N; first++)
		{
			for (second=first+1; second<N; second++)
			{

					if (abs(A[first]-A[second])==key)
					{
						flag=1;
						answer++;
					}
			}
			if (flag==1)
				flag1=1;

		}
		if (flag1==1)
			printf("%d\n",answer);
		else
			printf("No such pair exists.\n");
	}
	return 0;
}
