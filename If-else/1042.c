#include <stdio.h>

int main()
{
    int x, y, z, temp;
    scanf("%d %d %d", &x, &y, &z);

    int origin_num[3] = {x, y, z};

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z)
    {
        temp = x;
        x = z;
        z = temp;
    }

    if (y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }

    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", origin_num[0], origin_num[1], origin_num[2]);

    return 0;
}
