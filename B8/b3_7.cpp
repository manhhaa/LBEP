#include<stdio.h>

int fibonaci(int n) {
	int x0 = 0;
	int x1 = 1;
	int x2 = 1;
	if(n==1) {
		return x0; 
	}
	for(int i=3;i<n;i++) {
		x0 = x1;
		x1 = x2;
		x2 = x0 + x1;
	}
	return x2;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("So thu %d trong day Fibonaci la %d\n",n,fibonaci(n));
}
