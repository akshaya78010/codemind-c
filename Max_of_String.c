#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101];
    scanf("%[^
]
",&str);
    char max=str[0];
    char temp;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(max<str[i])
        {
            max=str[i];
            str[i]=temp;
            temp=max;
        }
    }
    printf("%c",temp);
}