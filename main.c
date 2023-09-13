/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,des,root1,root2,real,img;
    printf("Enter the value of a b c = ");
    scanf("%lf%lf%lf", &a,&b,&c);
    des=(b*b)-4*a*c;
    if (des==0)
    {
        root1=-b/(2*a);
        printf("The roots equal and value of = %lf", root1);
    }
    else if(des>0)
    {
        root1=(-b+sqrt(des))/(2*a);
        root1=(-b-sqrt(des))/(2*a);
        printf("The value of root1 = %lf and root2=%lf", root1,root2);
    }
    else 
    {
        real=-b/(2*a);
        img=sqrt(-des)/(2*a);
        printf("The root1=%lf+%lfi,  root2=%lf+%lfi", real, img, real, img );
    }
    
    return 0;
}
