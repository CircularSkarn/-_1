#include<stdio.h>
#include<math.h>

double geometricSum(double a1, double q, int n) {
    if (fabs(q - 1.0) < 1e-6) {  // 浮点数比较：q≈1时，和为 n*a1
        return a1 * n;
    } else {  // 核心公式：S_n = a1*(1 - q^n)/(1 - q)
        return a1 * (1 - pow(q, n)) / (1 - q);
    }
}