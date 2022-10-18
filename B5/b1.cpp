#include<stdio.h>
#include<math.h>

int main() {
	int a;
	printf("Nhap tong doanh thu: ");
	scanf("%d", &a);
	if (a <= pow(10,8)) {
		printf("Hoa hong nha duoc la: %d", a/25);
	}
	else if (a <= 3*pow(10,8)) {
		printf("Hoa hong nha duoc la: %d", a/10);
	}
	else {
		printf("Hoa hong nha duoc la: %d", a/5);
	}
}
