//
// Created by Administrator on 2024/6/9.
// 计算sum = 2^1 + 2^2 + 2^3 + ... + 2^n

#include <stdio.h>

int main() {
    int pow(int n);
    int num,result=0;
    scanf("%d", &num);

    if (num>0 && num<=10)
        for (int i=1;i<=num;i++) {
            result+=pow(i);
        }

    printf("result = %d", result);

    return 0;
}

// 计算单个项的值
int pow(int n) {
    int result=2;
    for (int i=2;i<=n;i++) {
        result*=2;
    }
    return result;
}

