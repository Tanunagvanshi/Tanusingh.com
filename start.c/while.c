#include <stdio.h>
int main()
{
int n,i,f ;
i=1;
f=1;
printf("Enter the numer:");
    scanf("%d",&n);
while (i<=n)
{
   
    f*=i;
    i++;
    printf("%d",f);
}
return 0;





}