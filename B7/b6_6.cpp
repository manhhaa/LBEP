#include<stdio.h> 

int main() {
	int a,i;
	do {
		printf("Nhap n: ");
		scanf("%d", &a);	
	}while (a <= 0);
	if (a==1||a==2) {
		printf("So o vi tri thu %d cua day la 1", a);
		return 0;
	}
	int x1,x2 = 1;
	int x3,x4 = 0;
	for(i = 2; i < a; i++) {
		x3 = x1 + x2;
		x4 = x2;
		x2 +=x1;
		x1 = x4;
	}
	printf("%d", x3);
}
