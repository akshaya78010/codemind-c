#include<stdio.h>
#include<math.h>
int main()
{
    double b;
    scanf("%lf",&b);
    if(b<=10000)
    {
        printf("%.2lf",(b+b*(0.8)+b*0.2));
    }
    else if(b<=20000)
    {
        printf("%.2lf",(b+b*0.9+b*0.25));
    }
    else if(b>20000)
    {
        printf("%.2lf",(b+b*0.95+b*0.3));
    }
}