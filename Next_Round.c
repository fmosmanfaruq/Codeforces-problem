#include <stdio.h>
int main()
{
    int n, k, count = 0, arr[100];
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]>=arr[k-1] && arr[i]>0)
            {
                count++;
            }
        }
    
    printf("%d", count);
}