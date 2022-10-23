#include<stdio.h>

int main() {
	int a,i;
	int x;
	do {
		printf("Nhap n: ");
		scanf("%d", &a);	
	}while (a <= 0);
	int b = a;
	for (i = 0; i < b; i++) {
		if(a < 11) {
			x = a;
			break;
		}
		a = a / 10;
	}
	printf("So dau tien cua %d la %d", b, x);
}
