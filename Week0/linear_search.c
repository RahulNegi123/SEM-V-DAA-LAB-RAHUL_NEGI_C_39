#include <stdio.h>
int main()
{
	int n;
	printf("   Enter size of array : ");
	scanf("%d",&n);
	int arr[n], i;

	printf("\n\n   Enter elements of array\n");
	for (i=0; i<n; i++)
		scanf("%d", &arr[i]);

	printf("\n\n   Enter element to search : ");
	int to_Search;
	scanf("%d", &to_Search);

	int flag = 0;
	for (i=0; i<n; i++)
	{
		if (arr[i]==to_Search)
		{
			printf("\n   Element found at index : %d", i);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("\n   Element not present in the array...");
		printf("\n\n   the total number of comparisons done are : %d", i);
	}
	else
		printf("\n\n   the total number of comparisons done are : %d", i+1);

	return 0;
}