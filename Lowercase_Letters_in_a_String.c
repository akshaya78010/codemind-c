#include<stdio.h>
int main()
{
	char str[101];
	scanf("%[^
]", str);
	int i;
	int lw;
   lw=0;

	for (i=0;str[i]!=NULL;i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			lw++;
	}

	printf("%d",lw);
}