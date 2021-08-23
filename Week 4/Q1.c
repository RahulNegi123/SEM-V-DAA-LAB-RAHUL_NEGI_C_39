#include <stdio.h>
#include <stdlib.h>
int comparison = 0;
int inversion = 0;
void mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int splitInd=(l + h)/2;
        mergeSort(arr,l,splitInd);
        mergeSort(arr,splitInd+1,h);
        mergeArr(arr,l,splitInd,h);
    }
}
void mergeArr(int arr[], int l, int s, int h)
{
    int n=h-l + 1, temp[n], i=l, j=s+1, k=0;
    while (i<=s && j<=h)
    {
        comparison++;
        if (arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
            inversion+=s-i+1;
        }
    }
    for (; i <= s; ++i, ++k)
    {
        temp[k] = arr[i];
    }
    for (; j <= h; ++j, ++k)
    {
        temp[k] = arr[j];
    }
    for (int i = l, j = 0; i <= h; ++i, j++)
    {
        arr[i] = temp[j];
    }
}
int main()
{
    int T;  scanf("%d", &T);
    for (int i1 = 0; i1<T; i1++)
    {
        comparison = 0;
        inversion=0;
        int n;  scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        mergeSort(arr, 0, n-1);
        for (int i = 0; i < n; ++i)
        {
            printf("%d  ", arr[i]);
        }
        printf("\ncomparisons = %d", comparison);
        printf("\ninversions = %d\n", inversion);
    }
    return 0;
}
