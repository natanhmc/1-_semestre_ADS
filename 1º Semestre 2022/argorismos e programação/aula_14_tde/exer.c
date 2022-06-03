#include <stdio.h>
int main()
{
    int x, f;
    f = 10;
    for (x = 1; x < f; x++)
    {
        if (x % 2 == 0)
        {
            f++;
            continue;
        }
        if (x == f)
        {
            break;
        }
    }
    printf("%d\n", x);
    printf("%d", f);
}