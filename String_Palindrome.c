#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",str);
    int flag=0,l,i;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]!=str[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }
    return 0;
}