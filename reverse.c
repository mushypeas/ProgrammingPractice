#include <stdio.h>

int main(void)
{
	int N, i;
	scanf("%d", &N);
	int num[N];
	for(i = 0; i < N; i++)
		scanf("%d", &num[i]);
	for(i = N - 1; i >= 0; i--)
		printf("%d ", num[i]);
	return 0;
}
