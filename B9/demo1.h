void ChuViTG() {
	int a,b,c;
	int d;
	do {
		printf("Nhap 3 canh cua tam giac: ");
		scanf("%d %d %d",&a,&b,&c);
		if ((a+b>c) && (b+c>a) && (a+c>b)) {
			d = 1;
		}
	}
	while(d!=1);
	printf("Chu vi cua tam giac la %d\n",a+b+c);
}

void DienTichTG() {
	int a,b,c;
	int d;
	do {
		printf("Nhap 3 canh cua tam giac: ");
		scanf("%d %d %d",&a,&b,&c);
		if ((a+b>c) && (b+c>a) && (a+c>b)) {
			d = 1;
		}
	}
	while(d!=1);
	float p = (a+b+c)/2.0;
	printf("Dien tich cua tam giac la %.2f\n",sqrt(p*(p-a)*(p-b)*(p-c)));
}

void SumInN() {
	int n,a=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	while(n>0) {
		a = a + n%10;
		n/=10;
	}
	printf("TOng cac chu so cua %d la %d\n",n,a);
}

void UCLN() {
	int a,b;
	printf("Nhap a va b: ");
	scanf("%d %d", &a,&b);
	int min = a;
	if(a>b) {
		min = b;
	}
	for(int i = min; i>=1; i--) {
		if(b%i==0&&a%i==0) {
			printf("UCLN cua %d va %d la %d\n",a,b,i);
			return;
		}
	}
}

void BCNN() {
	int a,b;
	printf("Nhap a va b: ");
	scanf("%d %d", &a,&b);
	for(int i = a*b; i>=1; i--) {
		if(i%a==0&&i%b==0) {
			printf("BCNN cua %d va %d la %d\n",a,b,i);
			return;
		}
	}
}

void SoCP() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i = 0; i < sqrt(n)+2; i++) {
		if(i*i == n) {
			printf("%d la so chinh phuong\n",n);
			return;
		}
	}
	printf("%d khong la so chinh phuong\n",n);
}

void findN() {
	int n=1;
	int i = 0;
	while(n*n+n<20000) {
		n++;
	}
	printf("So nguyen duong thoa man la %d",n+1);
}

void checkN() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a=1,b=n;
	int checkSoCuoi=b%10;
	b/=10;
	while(b!=0) {
		int checkSoKeCuoi = b % 10;
		b/=10;
		if(checkSoCuoi>checkSoKeCuoi) {
			a=0;
			break;
		}
		else {
			checkSoCuoi = checkSoKeCuoi;
		}
	}
	if(a) {
		printf("So %d giam dan tu trai sang phai.\n");
	}
	else {
		printf("So %d khong giam dan tu trai sang phai.\n");
	}
}
