#include<stdio.h>
int dc(int n)
{
    int cnt = 0;
    while(n!=0)
    {
        n=n/10;
        cnt+=1;
    }
    if(cnt%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,count = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(dc(arr[i]) == 1)
        {
            count+=1;
        }
    }
    printf("%d",count);
}