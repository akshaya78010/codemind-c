#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101];
    scanf("%[^
]
",&str);
    int count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    printf("%d",count);
}