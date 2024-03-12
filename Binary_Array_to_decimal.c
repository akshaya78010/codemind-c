#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=0;
    for(int i=n-1 ; i>=0 ; i--)
    {
        sum+=arr[i]*pow(2,l);
        l+=1;
    }
    printf("%d",sum);
}