#include<stdio.h>

int main() {
	int a;
	printf("Nhap n: ");
	scanf("%d", &a);
	for(int i = a - 1; i > 0; i--) {
		if(i%2==0 && i%3==0) {
			printf("%d ",i);
			break;
		}
	}
}
