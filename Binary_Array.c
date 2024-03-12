#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum = 0,flag = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1 ; i>=0 ; i--)
    {
        if(arr[i] != 2 && arr[i] != 3 && arr[i] !=4 && arr[i] !=5 && arr[i] !=6 && arr[i] !=7 && arr[i] !=8 && arr[i] !=9)
        {
            flag = 1;
        }
        break;
    }
    if(flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}