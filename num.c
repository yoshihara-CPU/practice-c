#include<stdio.h>
int  num(int a) {
	if (a % 2 == 0) {
		return 1;
}
	if (a % 2 != 0) {
		return 0;
	}

} 

int main() {
	printf("整数を入力してください\n");
	int x;
	scanf_s("%d", &x);
int res = 	num(x);
printf("偶数判定の結果は % dです\n", res);
}
