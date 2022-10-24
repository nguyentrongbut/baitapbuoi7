#include<stdio.h>

int main() {
	int n, i, a;
	int max = 0;
	do {
		printf("Nhap vao so nguyen duong n: ");
		scanf("%d", &n);
	} while(n<0);
	a = n;
	if(n == 0)
	max = 0;
	do {
		i= n % 10;
		if(i > max) {
			max = i;
		}
	} while(n /= 10);
	printf("Chu so lon nhat la: %d", max);
}
