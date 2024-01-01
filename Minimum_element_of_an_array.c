#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%lf",&arr[i]);
}
int temp=arr[0];
for(int i=0;i<n;i++)
{
  if(arr[i]<temp)
  {
     temp=arr[i]; 
  }
}
printf("%d",temp);
}
