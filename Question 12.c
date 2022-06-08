#include <stdio.h>
#include <math.h>
float f(float x)
{
    return x*x*x-3*x+2.05;
}
int main()
{
    float a,b,c;
    printf("enter the ineterval range: ");
    scanf("%f %f",&a,&b);
    while (fabs(a-b)>0.001)
    {
        c=(a+b)/2;
        if(f(a)*f(c)<0)
            b=c;
        else
            a=c;
    }
    printf("The required root is %.2f",c);
    return 0;
}
/*Output:
*   enter the ineterval range: -3 -2
*   The required root is -2.00
*/
