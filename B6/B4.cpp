#include<stdio.h>
#include<math.h>

int main() {
	int a,reverse = 0;
	printf("Nhap n: ");
	scanf("%d", &a);
	while(a>0) {
		reverse = reverse*10 + a % 10;
		a/=10;
	}
	printf("%d",reverse);
}
