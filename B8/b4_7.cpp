#include<stdio.h>

int sum(int n) {
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum+=i;
	}
	return sum;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Tong S la %d", sum(n));
}
