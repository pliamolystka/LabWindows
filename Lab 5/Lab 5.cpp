#include <stdio.h>
#include <math.h>
#include <stdbool.h> 
#include<Windows.h>

double a, b, c;
int dia, task;
#define pi 3.14

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (true)
    {
        printf("\n");
        printf("Виберіть завдання\n");
        printf("\n");
        printf("Команди: \n");
        printf("\n");
        printf("Введіть '1', для першого завдання \n");
        printf("Введіть '2', для другого завдання \n");
        printf("Введіть '3', для третього завдання \n");
        printf("\n");
        printf("Введіть цифру: ");
        scanf("%d", &task);  
        printf("\n");
        switch (task)
        {
        case 1:
            printf("Завдання 1. \n");
            printf("\n");
            printf("Введіть значення а: ");
            scanf("%lf", &a);
            printf("Введіть значення b: ");
            scanf("%lf", &b);
            printf("\n");
            printf("Дія 1 - Додавання \n");
            printf("Дія 2 - Віднімання \n");
            printf("Дія 3 - Множення \n");
            printf("Дія 4 - Ділення \n");
            printf("\n");
            printf("Виберіть дію: ");
            scanf("%d", &dia);
            printf("\n");
            switch (dia)
            {
            case 1:
                c = a + b;
                printf("Результат: %.2lf \n", c);
                break;
            case 2:
                c = a - b;
                printf("Результат: %.2lf \n", c);
                break;
            case 3:
                c = a * b;
                printf("Результат: %.2lf \n", c);
                break;
            case 4:
                if (b == 0)
                {
                    printf("Ділення не можливе! \n");
                }
                else
                {
                    c = a / b;
                    printf("Результат: %.2lf \n", c);
                }
                break;  
            default:
                printf("Невірний вибір дії!\n");
                break;
            }
            break;
        case 2:
        {
            double x, y, f_x;  
            int func_choice;
            printf("Завдання 2. \n");
            printf("\n");
            printf("Введіть значення x: ");
            scanf("%lf", &x);
            printf("Введіть значення y: ");
            scanf("%lf", &y);
            printf("Виберіть функцію f(x):\n1. sin(x)\n2. x^2\n3. e^x\nВаш вибір: ");
            scanf("%d", &func_choice);
            switch (func_choice)
            {
            case 1:
                f_x = sin(x);
                break;
            case 2:
                f_x = x * x;
                break;
            case 3:
                f_x = exp(x);
                break;
            default:
                printf("Невірний вибір функції!\n");
                break;
            }

            double xy = x * y;
            if (xy > 0.5 && xy < 10)
            {
                a = exp(f_x) - fabs(y);
            }
            else if (xy > 0.1 && xy < 0.5)
            {
                a = cbrt(fabs(f_x + y));
            }
            else
            {
                a = 2 * f_x * f_x;
            }
            printf("Результат: a = %.2lf \n", a);
        }
        break;
        case 3:
        {
            double R, D, L, S;
            int vybir;
            printf("Завдання 3. \n");
            printf("Виберіть одну з величин \n");
            printf("Для вибору введіть одну з команд нижче \n");
            printf(" 1 - R \n 2 - D \n 3 - L \n 4 - S \n");
            scanf("%d", &vybir); 
            switch (vybir)
            {
            case 1:
                printf("Введіть радіус R: ");
                scanf("%lf", &R);
                D = 2 * R;
                L = 2 * pi * R;
                S = pi * pow(R, 2);
                printf("Результати: \n R = %.2lf \n D = %.2lf \n L = %.2lf \n S = %.2lf \n", R, D, L, S);
                break;
            case 2:
                printf("Введіть діаметр D: ");
                scanf("%lf", &D);
                R = D / 2;
                L = 2 * pi * R;
                S = pi * pow(R, 2);
                printf("Результати: \n R = %.2lf \n D = %.2lf \n L = %.2lf \n S = %.2lf \n", R, D, L, S);
                break;
            case 3:
                printf("Введіть довжину L: ");
                scanf("%lf", &L);
                R = L / (2 * pi);
                D = 2 * R;
                S = pi * pow(R, 2);
                printf("Результати: \n R = %.2lf \n D = %.2lf \n L = %.2lf \n S = %.2lf \n", R, D, L, S);
                break;
            case 4:
                printf("Введіть площу S: ");
                scanf("%lf", &S);
                R = sqrt(S / pi);
                D = 2 * R;
                L = 2 * pi * R;
                printf("Результати: \n R = %.2lf \n D = %.2lf \n L = %.2lf \n S = %.2lf \n", R, D, L, S);
                break;
            default:
                printf("Помилка під час вибору!");
                break;  
            }
        }
        break;
        default:
            printf("Помилка при виборі\n");
            break;
        }
    }
    return 0;
}