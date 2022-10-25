#include<stdio.h>

int max(int a, int b, int c) {
	int d = b > c ? b : c;
	return a > d ? a : d;
}
int main() {
	int a,b,c;
	printf("Nhap a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("So lon nhat trong 3 so %d, %d, %d la %d",a,b,c,max(a,b,c));
}
