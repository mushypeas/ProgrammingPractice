#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int apc[30];
	char letter;
	int n;
	for(n = 0; n < 30; n++)
		apc[n] = 0;
	scanf("%d", &n);
	fflush(stdin);
	for(n; n > 0; n--)
	{
		letter = getchar();
		if( letter <= 'Z' )
			letter += 32;
		apc[letter - 'a']++;
	}
	for(n = 0; n < 30; n++)
		if( apc[n] > 0 )
			printf("%c %d\n", n + 'a', apc[n]);
	return 0;
}
