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
float temp=0.0;
for(int i=0;i<n;i++)
{
  temp+=arr[i];
}
printf("%.2f",temp/n);
}
