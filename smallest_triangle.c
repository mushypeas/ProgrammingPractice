#include <stdio.h>
#include <math.h>

int main(void)
{
	int N, a, b, c;
	double area, min;
	scanf("%d", &N);
	int x[N][2];
	for(a = 0; a < N; a++)
	{
		scanf("%d", &x[a][0]);
		scanf("%d", &x[a][1]);
	}
	for(a = 0; a < N - 2; a++)
		for( b = a + 1; b < N - 1; b++)
			for(c = b + 1; c < N; c++)
			{
				area = 0.5 * fabs(x[a][0] * x[b][1] + x[b][0] * x[c][1] + x[c][0] * x[a][1] - x[b][0] * x[a][1] - x[c][0] * x[b][1] - x[a][0] * x[c][1]);
				if((a == 0 && b == 1 && c == 2) || area < min)
					min = area;
			}
	printf("%f", min);
	return 0;
}
