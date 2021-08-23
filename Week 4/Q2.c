#include <stdio.h>
#include <stdlib.h>
int comparison = 0;
int swap = 0;
int makePivot(int arr[],int l,int h)
{
    int p=arr[h];
    int i=l-1,j=l;
    for (; j<h;++j)
    {
        ++comparison;
        if (arr[j] <= p)
        {
            ++swap;
            int t = arr[++i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    swap++;
    int t = arr[++i];
    arr[i] = arr[j];
    arr[j] = t;
    return i;
}
void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pivot=makePivot(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}
int main()
{
    int T;  scanf("%d", &T);
    for (int i1=0;i1<T;i1++)
    {
        comparison = 0;
        swap = 0;
        int n;  scanf("%d", &n);
        int arr[n];
        for (int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        quickSort(arr,0,n-1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\ncomparisons = %d", comparison);
        printf("\nswaps = %d\n", swap);
    }
    return 0;
}
