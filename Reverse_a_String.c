#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%[^
]",&str);
    int l=strlen(str);
    int i;
    for(i=l-1;str[i]!=NULL;i--)
    {
    printf("%c",str[i]);
}
}