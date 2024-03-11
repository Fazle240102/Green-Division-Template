#include <stdio.h>
int main()
{
    int tc, n, i;
    scanf("%d", &tc);
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    for (i = 0; i < tc; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            count1++;
        }
        if (n % 3 == 0)
        {
            count2++;
        }
        if (n % 4 == 0)
        {
            count3++;
        }
        if (n % 5 == 0)
        {
            count4++;
        }
    }

    printf("%d Multiplo(s) de 2\n", count1);
    printf("%d Multiplo(s) de 3\n", count2);
    printf("%d Multiplo(s) de 4\n", count3);
    printf("%d Multiplo(s) de 5\n", count4);
}