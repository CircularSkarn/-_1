#include "01.h" 

int main() {
    int choice, n;
    double a1, d, q;

    printf("数列求和\n1.等差数列求和\n2.等比数列求和\n请输入选择(1\\2)");
    scanf("%d", &choice);
    printf("项数");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("项数必须是正整数，请重新输入：");
        while (getchar() != '\n');
    }

    if (choice == 1) {
        printf("首项");
        scanf("%lf", &a1);
        printf("公差");
        scanf("%lf", &d);
        double sum = arithmeticSum(a1, d, n);
        printf("等差数列前%d项和 = %.2lf\n", n, sum);
    } else if (choice == 2) {
        printf("首项");
        scanf("%lf", &a1);
        printf("公比");
        scanf("%lf", &q);
        double sum = geometricSum(a1, q, n);
        printf("等比数列前%d项和 = %.2lf\n", n, sum);
    } else {
        printf("仅支持输入1或2\n");
    }
    printf("------------------------\n");

    return 0;
}