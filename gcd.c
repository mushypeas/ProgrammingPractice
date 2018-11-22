#include <stdio.h>
#define true 1
int gcd(){
	int a, b;
	scanf("%d %d", &a, &b);
	while(true){
		if(a == 0)
			return b;
		else if(b == 0)
			return a;
		if(a > b)
			a = a % b;
		else if(b > a)
			b = b % a;
		else
			return a;
	}
}
int main()
{
	int n, i;
	long long sum = 0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		sum += gcd();
	printf("%lld", sum);
	return 0;
}