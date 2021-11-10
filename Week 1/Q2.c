#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	int comparison=0, flag=0;
	while (T--)
	{
	    	comparison=0, flag=0;
		int N;
		scanf("%d", &N);
		int A[N];
		for (int i=0; i<N; i++)
			scanf("%d", &A[i]);
		int key;
		scanf("%d", &key);

        	int low=0, high=N-1, mid;
        	while (low<=high)
		{
			mid=(low+high)/2;
			if (A[mid]==key)
			{
				comparison++;
				flag=1;
				printf("Present %d\n",comparison);
            		}
			else if (A[mid]<key)
			{
				comparison++;
				low=mid+1;
			}
			else
			{
				comparison++;
				high=mid-1;
			}
			if (flag==1)
                break;
        }
		if (flag==0)
            printf("not Present %d\n",comparison);
    }
    return 0;
}
