#include<stdio.h>

void TBC(int arr[], int n) {
	int count=0,sum=0;
	for (int i=0; i<n; i++) {
		if(arr[i]%2==1) {
			count++;
			sum+=arr[i];
		}
	}
	int a = sum/count;
	if(count==0) {
		printf("Mang khong co so le.\n");
	}
	else {
		printf("TBC cac so le trong mang la %d\n",a);
	}
	return;
}

void SL(int arr[], int n) {
	int count1=0, sum1=0;
	for(int i=1; i<n;i+=2) {
		if(arr[i]%2==1) {
			count1++;
			sum1+=arr[i];
		}
	}
	if(count1==0) {
		printf("Mang khong co so le nao o vi tri chan.\n");
	}
	else {
		printf("TBC cac so le o vi tri chan trong mang la %d\n",sum1/count1);
	}
	return;
}

int checkX(int arr[], int n) {
	int x; 
	printf("Nhap x: ");
	scanf("%d",&x);
	for(int i=0; i<n;i++) {
		if(arr[i]==x) {
			printf("%d co trong mang\n"),x;
			return 0;
		}
	}
	printf("%d khong co trong mang\n",x);
}

int checkSL( int arr[], int n) {
	int a = 0;
	for(int i=0; i<n; i++) {
		if(arr[i]%2==1) {
			a=arr[i];
		}
	}
	if(a==0) {
		printf("Mang khong co so le.\n");
	}
	else {
		printf("SO le cuoi cung cua mang la %d\n",a);
	}
}

int main() {
	int n,x;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("\nNhap cac phan tu: ");
	int arr[n];
	for (int i = 0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
//	B1
	TBC(arr,n);
//	B2
	SL(arr,n);
	
//	B3
 	checkX(arr,n);
// 	B4
	checkSL(arr,n);
}
