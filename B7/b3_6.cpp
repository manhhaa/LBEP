#include<stdio.h>

int main() {
	int a,i;
	int sum = 0;
	printf("Nhap n: ");
	scanf("%d", &a);
	int b = a;
	for (i = 0; i < b; i++) {
		if(a < 11) {
			sum += a % 10;
			break;
		}
		sum += a % 10;
		a = a / 10;
	}
	printf("Tong cac so cua %d la %d", b, sum);
}
