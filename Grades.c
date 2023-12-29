#include<stdio.h>
int main()
{
    int phy,che,bio,math,comp,per;
    scanf("%d %d %d %d %d ",&phy,&che,&bio,&math,&comp);
    per=(phy+che+math+bio+comp)/5;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per<=90&&per>=80)
    {
        printf("Grade B");
    }
    else if(per<=80&&per>=70)
    {
        printf("Grade C");
    }
    else if(per<=70&&per>=60)
    {
        printf("Grade D");
    }
    else if(per<=60&&per>=40)
    {
        printf("Grade E");
    }
    else if(per<40)
    {
        printf("Grade F");
    }
}