#include<stdio.h>

int main() {
	int a,b,i,j;
	printf("Nhap a va b: ");
	scanf("%d %d", &a, &b);
	for ( i = a; i > 0; i--) {
		if( a % i == 0 && b % i == 0 ) {
			printf("UCLN cua %d va %d la %d\n", a, b, i);
			break;
		}
	}
	for ( j = a; j <= a*b; j++) {
		if( j % a == 0 && j % b == 0 ) {
			printf("BCNN cua %d va %d la %d\n", a, b, j);
			break;
		}
	}
	return 0;
}
