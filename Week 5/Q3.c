#include <stdio.h>
int main()
{
	int m, n, i=0, j=0;
	scanf("%d", &m);
	int arr1[m];
	for (i=0; i<m; i++)
		scanf("%d", &arr1[i]);
	scanf("%d", &n);
	int arr2[n];
	for (i=0; i<n; i++)
		scanf("%d", &arr2[i]);

	i=0, j=0;
	while (i!=m && j!=n)
    {
        if (arr1[i]==arr2[j])
        {
        	printf("%d ",arr1[i++]);
            j++;
        }
        else if (arr1[i]<arr2[j])
            ++i;
        else
            j++;
    }
	return 0;
}