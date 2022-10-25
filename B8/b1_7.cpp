#include<stdio.h>

int daonguoc(int a) {
	int n = 0;
	while(a>0) {
		n = n * 10  + a % 10;
		a/=10;
	}
	return n;
}
int main() {
	int a;
	printf("Nhap n: ");
	scanf("%d",&a);
	printf("So dao nguoc cua %d la %d",a,daonguoc(a));
}
