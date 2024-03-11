#include <stdio.h>

int main()
{
    int n, temp = 0, count = 0;
    scanf("%d", &n);

    int hit_time[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &hit_time[i]);
    }
    temp = hit_time[0];
    for (int i = 1; i < n; i++)
    {
        if (hit_time[i] < temp)
        {
            temp = hit_time[i];
            count = i;
        }
    }
    printf("%d\n", count + 1);

    return 0;
}
