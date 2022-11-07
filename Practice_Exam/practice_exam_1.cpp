#include<stdio.h> 

void sortNum() {
	printf("Enter 10 integers\n");
	int a[10];
	for(int i=0; i<10; i++) {
		printf("a[%d]: ", i+1);
		scanf("%d",&a[i]);
	}
	printf("Display in the reversed order\n");
	for(int i = 9; i>=0; i--) {
		printf("%d\n",a[i]);
	}
}

int main() {
	sortNum();
}
