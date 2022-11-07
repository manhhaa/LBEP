#include<stdio.h> 

int smallest_index(int a[], int n) {
	int smallest = a[0];
	int index = 0;
	for(int i=1; i<n; i++) {
		if(smallest>a[i]) {
			smallest = a[i];
			index=i;
		}
	}
	return index;
}

int main() {
	int n;
	printf("Total elements in the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Input array: \n");
	for(int i=0; i<n; i++) {
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	printf("Smallest index of array is %d",	smallest_index(a,n));
}
