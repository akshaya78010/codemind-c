#include <stdio.h>
int main() {
	char str[101];
	scanf("%[^
]", str);
	int i;
	int up, lw, d, sp;
	up = 0;
	for (i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			up++;
}
printf("%d ", up);
}
