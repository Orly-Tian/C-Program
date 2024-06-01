//
// Created by Administrator on 2024/6/1.
// 输入数字，输出从1到该数字之间的所有素数及其素数的个数。

#include<stdio.h>


int main() {
    int n,count=1;
    printf("Input the range,please:");
    scanf("%d", &n);

    printf("2 ");
    for (int i=3;i<=n;i++) {
        for (int j=2;j<=i;j++) {
            if (i!=j && i%j==0) {
                break;
            }
            else if (i==j) {
                printf("%d ", i);
                count ++;
            }
        }
    }

    printf("\n");
    printf("There are %d prime numbers in %d!", count, n);

    return 0;
}
