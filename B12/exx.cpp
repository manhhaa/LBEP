#include<stdio.h>

void Count() {
	int n,i,j;
	int check1=0,check2=0;
	printf("\nNhap so luong phan tu cua day: ");
	scanf("%d",&n);
	int a[n];
	printf("\nPhan tu cua day la: \n");
	for(j=0; j<n; j++) {
		scanf("%d",&a[j]);
	}
	for(i=0; i<n; i++) {
		if(a[i]>0) {
			check1++;
		}
		else{
			if(check1> check2) {
				check2=check1;
			}
			check1=0;
		}
	}
	if(check1 > check2) {
		printf("%d\n",check1);
	}else {
		printf("%d\n",check2);
	}
	
}

void Sum() {
	int n,i,j;
	int sum1=0,sum2=0;
	printf("\nNhap so luong phan tu cua day: ");
	scanf("%d",&n);
	int a[n];
	printf("\nPhan tu cua day la: \n");
	for(j=0; j<n; j++) {
		scanf("%d",&a[j]);
	}
	for(i=0; i<n; i++) {
		if(a[i]>0) {
			sum1+=a[i];
		}
		else{
			if(sum1> sum2) {
				sum2=sum1;
			}
			sum1=0;
		}
	}
	if(sum1 > sum2) {
		printf("%d\n",sum1);
	}else {
		printf("%d\n",sum2);
	}
	
}

int main () {
	Count();
	Sum();
}
