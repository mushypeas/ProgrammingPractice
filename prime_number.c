#include <stdio.h>
#define true   1
#define false  0
int main(void)
{
	int N, M, i, is_prime;
	scanf("%d", &N);
	scanf("%d", &M);
	for(N; N <= M; N++)
	{
		is_prime = true;
		for(i = 1; i < N; i++)
			if((N % i == 0) && (i != 1))
			{
				is_prime = false;
				break;
			}
		if(is_prime && N != 1)
			printf("%d ", N);
	}
	return 0;
}
