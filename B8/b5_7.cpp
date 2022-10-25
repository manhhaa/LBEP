#include<stdio.h>

float sum(int n) {
	float sum = 0;
	for(int i = 1; i <= n; i++) {
		sum+=1.0/i;
	}
	return sum;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Tong S la %f", sum(n));
}
