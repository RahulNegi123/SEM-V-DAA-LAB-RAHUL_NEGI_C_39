#include <stdio.h>
int main()
{
	int T;		scanf("%d", &T);
	while(T--)
	{
		printf("\n");
		int n; 		scanf("%d", &n);
		int arr[n];
		for (int i=0; i<n; i++)
			scanf("%d", &arr[i]);
		int key; 	scanf("%d", &key);
		printf("\n");

		int a;
		for (int i = 0; i < n; ++i) 
        {
 			for (int j = i + 1; j < n; ++j)
            {
            	if (arr[i] > arr[j]) 
                {
                	a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }

        int flag = 1, l=0, h=n-1, count=0;
    	while (l <= h)
    	{
        	if (arr[l] + arr[h] > key)
            	h--;
        	else
        	{
            	if (arr[l] + arr[h] == key)
            	{
            		count++;
            		if (count>1)
            			printf(",%d %d ",arr[l], arr[h]);
            		else
            			printf("%d %d ",arr[l], arr[h]);
                	flag = 0;
            	}
            	l++;
        	}
    	}
    	if (flag)
        	printf("No Such pair Exist\n");
    }
	return 0;
}