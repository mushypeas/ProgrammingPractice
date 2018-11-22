#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 100100

void merge(int *arr, int start, int mid, int end) {
	if(end-start < 1)
		return;
	merge(arr, start, (start+end/2)/2, end/2);
	merge(arr, end/2+1, (end/2 + 1 + end)/2, end);
	int temparr[MAX_LEN];
	int i1 = start, i2 = mid;
	int result_index = start;

	while(result_index <= end) {
		// If 2nd array finished OR,
		// If not, 1st array is not over and (arr[i1] < arr[i2])

		// Please understand how & why this conditional branch works
		if ((i2 > end) || (i1 < mid && (arr[i1] < arr[i2]))) {
			temparr[result_index++] = arr[i1++];
		}
		else {
			temparr[result_index++] = arr[i2++];
		}
	}

	// Copy temparr into original array
	for (int i = start; i <= end; i++) {
		arr[i] = temparr[i];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int *arr;
	arr = (int *)malloc(n*sizeof(int));
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	merge(arr, 0, n/2, n-1);
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
	free(arr);
	return 0;
}