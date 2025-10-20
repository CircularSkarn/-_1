#include<stdio.h>
#include<math.h>

double geometricSum(double a1, double q, int n) {
    if (fabs(q - 1.0) < 1e-6) {
        return a1 * n;
    } else { 
        return a1 * (1 - pow(q, n)) / (1 - q);
    }

}
