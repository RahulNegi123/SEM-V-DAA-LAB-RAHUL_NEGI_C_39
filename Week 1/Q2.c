#include <stdio.h>
int main()
{
	int i, low, high, mid, n, key, array[100];
	printf("Enter number of elements to enter in the array : ");
	scanf("%d", &n);
	printf("\nNow enter the elements....\n");
	for(i = 0; i < n; i++)
		scanf("%d", &array[i]);
	printf("\nEnter the key element to find....");
	scanf("%d", &key);
	low = 0;
	high = n - 1;
	mid = (low+high)/2;
	int numOFcompare=0;
	while (low <= high)
	{
		numOFcompare++;
		if(array[mid] < key)
			low = mid + 1;
		else if (array[mid] == key)
		{
			printf("\n\nNumber is present and number of comparisons are %d", numOFcompare);
			break;
		}
		else
			high = mid - 1;
		mid = (low + high)/2;
	}
	if(low > high)
		printf("\n\nNumber is not present and number of comparisons are %d", numOFcompare);
	
	return 0;
}