#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
   int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]+a)>=max){
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}