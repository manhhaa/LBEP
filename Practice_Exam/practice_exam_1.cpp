#include<stdio.h> 

void sortNum() {
	printf("Enter 10 integers\n");
	int a[10];
	for(int i=0; i<10; i++) {
		printf("a[%d]: ", i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0; i<10; i++) {
		for(int j=i+1; j<10; j++) {
			if(a[i]>a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j]=temp;
			}
		}
	}
	printf("Display in the reversed order\n");
	for(int i = 0; i<10; i++) {
		printf("%d\n",a[i]);
	}
}

int main() {
	sortNum();
}
