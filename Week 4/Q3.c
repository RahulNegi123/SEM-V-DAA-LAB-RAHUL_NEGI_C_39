#include <stdio.h>
#include <stdlib.h>
int findKSmallest(int [],int,int,int);
int main()
{
    int T; scanf("%d", &T);
    for (int i1=0;i1<T;i1++)
    {
        int n;  scanf("%d", &n);
        int arr[n];
        for (int i=0;i<n;++i)
        {
            scanf("%d", &arr[i]);
        }
        int K;  scanf("%d", &K);
        K=K<=n?K-1:n-1;
        printf("%d\n", findKSmallest(arr, 0, n - 1, K));
    }
    return 0;
}
int findKSmallest(int arr[], int l, int h, int k)
{
    int p=arr[h],i=l-1,j=l;
    for (;j<=h;++j)
    {
        if (arr[j]<=p)
        {
            int t=arr[++i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    if (i==k)
        return arr[i];
    else if (i<k)
        return findKSmallest(arr,i+1,h,k);
    else
        return findKSmallest(arr,l,i-1,k);
}

