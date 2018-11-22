#include <stdio.h>

int array_cmp(int n, int *a, int *b){
	int i;
	for(i = 0; i < n; i++){
		if(a[i]>b[i])
			return 1;
		if(a[i]<b[i])
			return -1;
	}
	return 0;
}
/*int main(){
	int n, i;
	scanf("%d", &n);
	int a[n], b[n];
	for(i=0;i<n;i++)
		scanf("%d", a + i);
	for(i=0;i<n;i++)
		scanf("%d", b + i);
	printf("%d\n", array_cmp(n,a,b));
	return 0;
}*/
