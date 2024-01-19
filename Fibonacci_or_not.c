#include<stdio.h>
int main()
{
   int n,first_number,second_number,result_number,flag;
   scanf("%d",&n);
   first_number=0;
   second_number=1;
   result_number=first_number+second_number;
   for(int i=1;i<=n;i++)
   {
first_number=second_number;
second_number=result_number;
result_number=first_number+second_number;
if(result_number==n)
{
    flag=1;
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