#include <stdio.h>
#include <conio.h>

int main()
{
int cp ,sp ;
float P ,L ;
printf("Enter the vlaue of cp and sp") ;
scanf("%d%d",&cp,&sp);
L = cp - sp ;
P = sp-cp ;
if(cp>sp)
printf("you are in loss\nloss=%f",L);
else
printf("you are in profit\nprofit=%f",P);

return 0;


}