#include<stdio.h>

int main() {
	int a, i;
	int S = 0;
	printf("Nhap n: ");
	scanf("%d", &a);
	if ( a < 0 ) {
		printf("%d khong la so hoan hao",a);
		return 0;
	}
	for (i=1;i<a;i++) {
		if ( a%i==0 ) {
			S+=i;
		}
	}
	if(S==a) {
		printf("%d la so hoan hao",a);
	}
	else 
		printf("%d khong la so hoan hao",a);
}
