#include<stdio.h> 

int main() {
	int a,i;
	int n, max;
	do {
		printf("Nhap n: ");
		scanf("%d", &a);	
	} while(a < 0);
	int x = a;
	if (a == 0) {
		max = a;
	}
	for (i = 0; i < 10; i++) {
		n = a % 10;
		if(n > max) {
			max = n;
		}
		a /= 10;
	}
	printf("Chu so lon nhat trong %d la %d", x, max);
}
