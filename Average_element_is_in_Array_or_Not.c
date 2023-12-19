#include<stdio.h>
int main()
{
    int n,avg,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<n;i++)
   {
     sum+=arr[i];
     avg=sum/n;
   }
   for(int i=0;i<n;i++)
   {
       if(avg==arr[i])
       {
           c=1;
       }
   }
   if(c==1)
   {
       printf("True");
   }
  else{
      printf("False");
  } 
}