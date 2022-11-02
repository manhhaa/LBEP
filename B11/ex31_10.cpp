#include<stdio.h>
#include<string.h>

void demNguyenAm() {
	char s[40];
	int a=0,b=0;
	gets(s);
	for (int i=0; i<strlen(s); i++) {
		if(s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='i') {
			a++;
		}
		else 
			b++;
	}
	printf("Chuoi co %d nguyen am\n",a);
	
	printf("Chuoi co %d cac ky tu khac",b);
}

void checkChuoi() {
	char a[100],b[100];
	printf("Nhap chuoi a: \n");
	gets(a);
	printf("Nhap chuoi b: \n");
	gets(b);
	int i = 0, j = 0;
	int flag = 0;
	
	while (a[i] != 0) {
		if (a[i] == b[j]) {
			j++;
			if (b[j] == 0) {
				flag = 1;
				break;
			}
		}
		else {
			j = 0;
		}
		i++;
	}
		
	if (flag)
		printf("Chuoi thu hai nam trong chuoi thu nhat\n");
	else
		printf("Chuoi thu hai khong nam trong chuoi thu nhat\n");
}

int main() {
	demNguyenAm();
	checkChuoi();
}
