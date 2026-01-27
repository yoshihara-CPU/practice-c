#include<stdio.h>
int main() {
	int a;
	a = 10;
	printf("aの値は%d\n", a);
	int* p;
	p = &a;
	printf("aのアドレスは%pです。\n", p);
	printf("aの値は%dです。\n", *p);
	return 0;
}
