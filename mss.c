#include <stdio.h>

int main(void)
{
	int n, i;
	int init, len;
	int max, sum;
	scanf("%d", &n);
	int num[n], cum[n];
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for(i = 0; i < n; i++){
		if(i==0){
			cum[0] = num[0];
			max = cum[0];
		}
		cum[i] = cum[i-1] + num[i];
		if(cum[i] < 0)
			cum[i] = 0;
		if(cum[i]>max)
			max = cum[i];
	}


	printf("%d", max);
	return 0;
}
