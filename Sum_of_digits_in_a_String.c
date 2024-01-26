#include<stdio.h>
#include<ctype.h>
int main()
{
    int sum=0;
    char str[101];
    scanf("%[^
]",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(isdigit(str[i])==1)
        {
            sum+=(str[i]-'0');
        }
    }
    printf("%d",sum);
}