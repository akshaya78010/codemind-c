#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,p=0,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i+=2)
{
    s+=arr[i];
}
for(int j=1;j<n;j+=2)
{
    p+=arr[j];
}
sum=abs(s-p);
printf("%d",sum);
}