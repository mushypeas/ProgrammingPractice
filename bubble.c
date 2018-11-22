#include <stdio.h>

int main(){
	int i, n;
	scanf("%d", &n);
	int arr[n];
	for(i = 0;i<n;i++)
		scanf("%d", &arr[i]);
int temp, loop;
for (loop = 0; loop < n - 1; loop++) {
    for (i = 0; i < n - 1 - loop; i++)
        if (arr[i] > arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
}
for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
return 0;
}