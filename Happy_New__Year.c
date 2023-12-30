#include<stdio.h>
int main()
{
    int h,m,t;
    scanf("%d %d",&h,&m);
   t=1440-((h*60)+m);
   printf("%d",t);
}