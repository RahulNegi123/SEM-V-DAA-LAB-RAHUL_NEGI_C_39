#include <stdio.h>
int main()
{
    int T;  scanf("%d", &T);
    for (int times=0; times<T; times++)
    {
        int n; int comparison=0, shift=0;
        scanf("%d", &n);
        int A[n];
        for (int i=0; i<n; i++)
            scanf("%d", &A[i]);


        for (int i=1; i<n; i++)
        {
            int key = A[i];
            int left_index = i-1;
            if (key>A[left_index])
                comparison++;
            while (key < A[left_index] && left_index>=0)
            {
                comparison++;

                A[left_index+1] = A[left_index];
                shift++;
                --left_index;
            }
            A[left_index+1] = key;
        }
        for (int i1=0; i1<n; i1++)
            printf("%d ",A[i1]);

        printf("\ncomparisons = %d\nshifts = %d\n",comparison+1, shift);
    }
    return 0;
}
