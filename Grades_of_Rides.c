#include<stdio.h>
int main()
{
    int hf,sf,spf;
    scanf("%d %d %d",&hf,&sf,&spf);
    if(hf>50&&sf>60&&spf>100)
    {
        printf("%d",10);
    }
  else  if(hf>50&&sf>60)
    {
        printf("%d",9);
    }
   else if(sf>60&&spf>100)
    {
        printf("%d",8);
    }
   else if(hf>50&&spf>100)
    {
        printf("%d",7);
    }
   else if(hf>50)
    {
        printf("%d",6);
    }
    else if(sf>60)
    {
        printf("%d",6);
    }
    else if(spf>100)
    {
        printf("%d",6);
    }
  else  if(hf<=50&&sf<=60&&spf<=100)
    {
        printf("%d",5);
    }
}