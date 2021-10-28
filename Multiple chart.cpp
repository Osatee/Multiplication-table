#include <stdio.h>

int main()
{
    int a;
    scanf ("%d", &a);

    int i = 1;
    for (i=1; i<= 12; i++)
    {
        printf("%d x %2d = %6d\n", a, i, a*i);
    }
    return 0;
}

