#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;
    printf("Введіть координати точки X: ");
    scanf("%lf", &x);
    printf("Введіть координати точки Y: ");
    scanf("%lf", &y);
    int result = (x >= 0 && y >= -x && y <= x) ? 1 : 0;
    printf("Результат: %d\n", result);

    return 0;
}
