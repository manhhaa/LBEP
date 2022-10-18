#include<stdio.h>
#include<math.h>

int main() {
	int a,b,c;
	printf("Diem bai kiem tra: ");
	scanf("%d", &a);
	printf("Diem thi giua ky: ");
	scanf("%d", &b);
	printf("Diem thi cuoi ky: ");
	scanf("%d", &c);
	int d = (a + b + c) / 3;
	printf("Diem trung binh: %d\n", d);
	if (d >= 9) {
		printf("Hoc luc dat hang A");
	}
	else if (d >= 7) {
		printf("Hoc luc dat hang B");
	}
	else if (d >= 5) {
		printf("Hoc luc dat hang C");
	}
	else {
		printf("Hoc luc dat hang F");
	}
}
