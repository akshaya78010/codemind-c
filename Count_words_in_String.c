#include<stdio.h>
int main()
{
    int count =1;
    char str[101];
    scanf("%[^
]",&str);
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]==32)
        {
            count+=1;
        }
    }
    printf("%d",count);
}