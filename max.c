#include<stdio.h>
int  max(int a, int b) {
	int ans = (a > b) ? a : b;
	printf("最大値は %d\n", ans);
	return ans;
}
int main() {
	int a, b;
	printf("二つの数字を入力してください\n");
	scanf_s("%d%d", &a, &b);
	max(a, b);
}
