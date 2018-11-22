#include <stdio.h>
#define true 1

long long bin_search(int *arr, int N, int st, int en)
{
	int mm;
	int i;
	long long index = -1;
	for(mm = 0; mm < 10; mm++){
	i = (st + en)/2;
	if(arr[i] == N)
		index = i + 1;
	else if(arr[i] > N)
		en = i+1;
	else
		st = i-1;
	}
	for(i=st;i<en;i++){
		if(arr[i] == N)
			index = i + 1;
	}
	return index;
}
int main(){
	int m = 0, n, i;
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &n);
	int arr2[n];
	long long sum_index = 0;
	for(i=0; i<n; i++){
		scanf("%d", &arr2[i]);
		sum_index += bin_search(arr, arr2[i], m, n);
	}
	printf("%lld", sum_index);
	return 0;
}