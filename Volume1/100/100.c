#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calculate_num_cycles(int n)
{
    int i = 1;

    while (n != 1)
    {
        i++;
        if (n % 2 != 0)
            n = 3 * n + 1;
        else
            n = n / 2;
    }

    return i;
}

int main()
{

    int i = 0, j = 0, max, res, a;
    int x, y;

    while (scanf("%d %d", &i, &j) == 2)
    {
        if (j > i)
        {
            x = i;
            y = j;
        }
        else
        {
            x = j;
            y = i;
        }

        max = 0;
        for (a = x; a <= y; a++)
        {
            res = calculate_num_cycles(a);
            if (res > max)
                max = res;
        }

        printf("%d %d %d\n", i, j, max);
    }

    return 0;
}
