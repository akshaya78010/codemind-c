#include<stdio.h>
int main()
{
    int flag=1;
 char str[101];
 scanf("%s",&str);
 for(int i=0 ;str[i]!=NULL;i++)
 {
     for(int j=i+1 ; str[j]!=NULL ; j++)
     {
         if(str[i]==str[j])
         {
             flag=0;
         }
     }
 }
 if(flag==1)
 {
     printf("True");
 }
 else
 {
     printf("False");
 }
}