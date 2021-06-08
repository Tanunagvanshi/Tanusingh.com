#include <stdio.h>
#include <conio.h>

main ()
{
float a1, a2, a3 , a4, a5, A , P ;
printf("enter the marks of all five subjects");

scanf("%f%f%f%f%f",&a1,&a2,&a3, &a4,&a5);

A = (a1+a2+a3+a4+a5)/5 ;
P = A*100 ;


printf("%f\n%f\n", A,P);
return 0 ;








}