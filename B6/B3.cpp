#include<stdio.h>
#include<math.h>

int main() {
	int a;
	int count=0;
	printf("Nhap n: ");
	scanf("%d", &a);
	if(a < 2) {
			printf("%d khong la so nguyen to",a);
			return 0;
	}
	for(int i = 2; i < a; i++) {
		if(a%i==0) {
			count++;
		}
	}
	if(count==0) {
		printf("%d la so nguyen to",a);
	}
	else 
		printf("%d khong la so nguyen to",a);
}
