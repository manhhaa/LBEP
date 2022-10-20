#include<stdio.h>

int main() {
	int a;
	printf("Nhap n: ");
	scanf("%d", &a);
	for(int i = 1; i < a; i+=2) {
		if(i%2==1) {
			printf("%d ",i);
		}
	}
}
