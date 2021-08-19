#include <stdio.h>
int main()
{
    int T;  scanf("%d", &T);
    for (int i1=0; i1<T; i1++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        int comp=0, shift=0;
        for (int step=0; step<n-1; step++)
        {
            int min_num_index=step;
            for (int i=step+1; i<n; i++)
            {
                if (arr[i]<arr[min_num_index])
                {
                    min_num_index=i;
                    comp++;
                }
                else
                    comp++;

            }
            int temp;
            temp = arr[min_num_index];
            shift++;
            arr[min_num_index]=arr[step];
            arr[step]=temp;
        }
        for (int i1=0; i1<n; i1++)
            printf("%d ",arr[i1]);

        printf("\ncomparisons = %d\nshifts = %d\n",comp, shift);

}
return 0;
}
