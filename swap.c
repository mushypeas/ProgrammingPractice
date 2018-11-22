#include <stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
	return;}
/*int main(void){
	int a,b;
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;}*/
