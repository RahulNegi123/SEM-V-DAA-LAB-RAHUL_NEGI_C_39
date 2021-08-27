#include <bits/stdc++.h>
using namespace std;
int getINDEXPOS( int charTOnum)
{
    int index = 0;
    for (int i1=97; i1<charTOnum; i1++)
        index++;
    return index;
}

// below function does the opposite of above function
char returns_CHAR_corresponding_TO_index_OF_count(int index_max1)
{
    int index = 97;
    for (int i1=0; i1<index_max1; i1++)
        index++;
    return (char)index;
}

int main()
{
    int T;  cin >> T;
    for (int times=0; times<T; times++)
    {
        int n;  cin >> n;
        char a[n];
        for (int i=0; i<n; i++)
            cin >> a[i];

        int count[26]={0};
        for (int i=0; i<n; i++)
        {
            int num = (int)a[i];
            int this1 = getINDEXPOS (num);
            count [this1]++;
        }
        int max=count[0];
        int index_of_max_in_count=0;

        for (int i=1; i<26; i++)
        {
            if (count[i]>max)
            {
                index_of_max_in_count = i;
                max=count[i];
            }
        }
        if (max>1)
            cout<<"\n" <<returns_CHAR_corresponding_TO_index_OF_count( index_of_max_in_count )<<" - "<<max<<"\n";
        else
            cout << "\nNo Duplicates Present\n";
    }
    return 0;
}

