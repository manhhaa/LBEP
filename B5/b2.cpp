#include<stdio.h>
#include<math.h>

int main() {
	int a;
	printf("Nhap luong nhan vien: ");
	scanf("%d", &a);
	if (a >= 15*pow(10,6)) {
		printf("Thue thu nhap la: %d", a*3/10);
		printf("\nLuong rong cua nhan vien la: %d", a - a*3/10);
	}
	else if (a >= 7*pow(10,6)) {
		printf("Thue thu nhap la: %d", a*2/10);
		printf("\nLuong rong cua nhan vien la: %d", a - a*2/10);
	}
	else {
		printf("Thue thu nhap la: %d", a/10);
		printf("\nLuong rong cua nhan vien la: %d", a - a/10);
	}
}
