#include <stdio.h>
int main()
{
    int T;  scanf("%d", &T);
    for (int times=0; times<T; times++)
    {
        int n;  scanf("%d", &n);
        int A[n];
        for (int i=0; i<n; i++)
            scanf("%d", &A[i]);

        for (int i=1; i<n; i++) //insertion sort
        {
            int key = A[i];
            int left_index = i-1;

            while (key < A[left_index] && left_index>=0)
            {
                A[left_index+1] = A[left_index];
                --left_index;
            }
            A[left_index+1] = key;
        }

        int flag=0;
        for (int i=0; i<n-1; i++)
        {
            if (A[i]==A[i+1])
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
