#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",&str);
    for(int i=0;str[i]!=NULL;i++)
    {
    printf("%c",tolower(str[i]));
}
}