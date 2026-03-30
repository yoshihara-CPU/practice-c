#include <stdio.h>

int main() {
    int a[5];
    int max;
    printf("5つの整数を入力してください:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // 最初の値を最大値にする
    max = a[0];

    // 最大値を探す
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    printf("最大値は %d です\n", max);

    return 0;
}
