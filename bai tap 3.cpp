#include<stdio.h>

int main() {
	int n;
	int i;
	int s = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n != 0){
		i = n % 10;
		s += i;
		n /= 10;
	}
	printf("%d", s);
}
