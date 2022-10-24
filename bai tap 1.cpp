#include <stdio.h>

int main() {
	int n;
	do {
		printf("Nhap 1 so khac khong: ");
		scanf("%d", &n);
	} while(n==0);
	
	int s = 0;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0){
			printf("uoc cua %d la %d \n", n,i);
			s+=i;
		}
	}
	printf("tong uoc cua %d la %d", n,s);
}
