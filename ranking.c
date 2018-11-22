#include <stdio.h>

int main(void)
{
	int N, a, b, rank;
	scanf("%d", &N);
	int num[N], ranking[N];
	for(a = 0; a < N; a++)
		scanf("%d", &num[a]);
	for(a = 0; a < N; a++)
	{
		rank = 1;
		for(b = 0; b < N; b++)
			if(num[a] < num[b])
				rank++;
		ranking[a] = rank;
	}
	for(a = 0; a < N; a++)
		printf("%d ", ranking[a]);
	return 0;
}
