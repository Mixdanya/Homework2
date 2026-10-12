#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    SetConsoleOutputCP(65001);
    double x;
    double save_summ;
    scanf("%lf", &x);
    save_summ = x * 52.0;

    printf("Сумма, накопленная Юрой за год: %.2lf руб.\n", save_summ);

    return 0;
}