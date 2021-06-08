#include <stdio.h>

#include <conio.h>
int main()
{
    float km, m, cm ;

        printf("Enter the distance in km");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;
    printf("%f\n%f\n", m, cm);
    return 0;
}