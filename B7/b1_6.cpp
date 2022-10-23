#include<stdio.h> 

int main() {
	int a,i;
	int sum = 0;
	printf("Nhap n: ");
	scanf("%d",&a);
	printf("Cac uoc cua n la ");
	for( i = 1; i < a; i++) {
		if( a % i == 0 ) {
			sum += i;
			printf("%d ", i);
		}
	}
	printf("\nTong cac uoc cua n la %d", sum);
}
