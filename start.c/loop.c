#include <stdio.h>
int main()
{
    
    int i, wh, P;
    i=1;

    while (i <= 10)

    {
        printf("\nEnter the working hours:");
        scanf("%d", &wh);
        P =(wh-40 )* 12;
        if (wh > 40)
            printf("pay=%d", P);
        else
            printf("pay=0");

        i = i + 1;
    }

    return 0;
}