#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n % 2 == 1) {
		printf("奇数です\n");
	}
	else {
		printf(" 偶数です\n");
	}
}
