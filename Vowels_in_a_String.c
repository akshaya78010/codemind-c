#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%[^
]
",&str);
    char v;
    scanf("%c",&v);
    int flag=0;
    for(int i=0;str[i]!=NULL;i++)
    {
    if(str[i]==v)
    { 
        printf("True
%d",i);
        break;
    }
    else if(str[i]!=v)
    {
        flag++;
    }
    }
    if(flag==strlen(str))
    {
        printf("False");
    }
}