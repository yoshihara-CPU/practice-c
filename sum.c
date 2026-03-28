#include<stdio.h>
int main() {
	int n;
	int sum = 0;
	printf("nを入力してください：");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("合計は%dです\n", sum);
}
