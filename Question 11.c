#include<stdio.h>
#include<math.h>
#define f(x) (3*(x*x*x)-9*(x*x)+8)
#define g(x) (9*(x*x)-(18*x))
int main()
{
    float x0,x1;
    int i=0;
    printf("\nEnter the value of x0: ");
    scanf("%f",&x0);
    x1=x0-(f(x0)/g(x0));
    i+=1;
    float x=fabs(x1-x0);
    while (x>0.00001)
    {
        x0=x1;
        x1=x0-(f(x0)/g(x0));
        x=fabs(x1-x0);
        i+=1;
    }
    printf("\nOne of the roots of the given equation is: %0.5f",x1);
    printf("\n number of iterations are: %d",i);
    return 0;
}
/*Output:
*   Enter the value of x0: 1.5
*   One of the roots of the given equation is: 1.22607
*   number of iterations are: 4
*/
