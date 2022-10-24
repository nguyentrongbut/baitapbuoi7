#include<stdio.h>

int main() {
	int n, i, max;
	do {
		printf("Nhap vao so nguyen n lon hon 0: ");
		scanf("%d", &n);
	} while(n <= 0);
	i = n;
	
	do {
		max = i % 10; 
	} while (i /= 10);
	printf("chu so dau tien cua %d la %d", n,max);
}
