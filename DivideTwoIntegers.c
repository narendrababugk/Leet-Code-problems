#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int divide(int dividend, int divisor) {
    if (divisor == 0) return INT_MAX;
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;

    long long a = dividend;
    long long b = divisor;
    int negative = (dividend < 0) ^ (divisor < 0);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    long long quotient = 0;

    while (a >= b) {
        long long chunk = b;
        long long multiple = 1;

        while (a >= chunk + chunk) {
            chunk += chunk;
            multiple += multiple;
        }

        a -= chunk;
        quotient += multiple;
    }

    return negative ? (int)-quotient : (int)quotient;
}

void main(){
int dividend;
printf("Enter the dividend:");
scanf("%d",&dividend);

int divisor;
printf("Enter the divisor:");
scanf("%d",&divisor);

int res=divide(dividend,divisor);
printf("Result:%d",res);
}

