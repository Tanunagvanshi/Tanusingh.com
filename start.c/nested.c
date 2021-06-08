#include <stdio.h>
#include <conio.h>
int main()
{
int y;
printf("Enter the year:");
scanf("%d",&y);

if(
    y%4!=0
)
printf("%d is a non leap year",y);
else
if(
    y%100!=0

    
)
printf("%d is a leap year",y);
else
if(
    y%400!=0
)
printf("%d is a non leap year",y);
else 
printf("%d is a leap year",y);

return 0;




}