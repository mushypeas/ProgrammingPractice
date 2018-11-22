#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, i, inc;
	int xdif, ydif;
	double min, dis;
	scanf("%d", &n);
	int axis[n][2];
	for(i = 0; i < n; i++)
	{
		scanf("%d", &axis[i][0]);
		scanf("%d", &axis[i][1]);
	}
	for(i = 0; i < n - 1; i++)
		for(inc = i + 1; inc < n; inc++)
		{
			xdif = axis[i][0] - axis[inc][0];
			ydif = axis[i][1] - axis[inc][1];
			dis = sqrt(pow((double)xdif,2.0) + pow((double)ydif,2.0));
			if((i == 0 && inc == 1) || (dis < min))
				min = dis;
		}
	printf("%f", min);
	return 0;
}
