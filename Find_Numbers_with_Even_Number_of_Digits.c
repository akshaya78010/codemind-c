#include<stdio.h>
int dc(int n)
{
    int count = 0;
    while (n!=0)
    {
        n = n/10;
        count += 1;
    }
    return count;
}
int main(){
    int n,cnt=0; 
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i< n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i< n ;i++)
    {
        if (dc(arr[i])%2==0)
        {
            ++cnt;
        }
    }
    printf("%d", cnt);
}
    