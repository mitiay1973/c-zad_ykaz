#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
#define N 10
int (*f[4])();
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int exit = 1;
    int r = 0;
    int* mas = calloc(r, sizeof(int));
    f[0] = redact();
    f[1] = dinammass();
    f[2] = Treyg_massiv();
    f[3] = Vivod_funkcii(mas, r);
    while (exit == 1) {
        printf("Указатели\n");
        printf("Меню: \n1 - Редактирование и вывод\n2 - Динамическое создание и удаление \n3 - Произвольная длина массива\n4 - Треугольная матрица\n");
        int num;
        scanf_s("%d", &num);
        switch (num)
        {
        case 1:
            printf("Вы выбрали <Редактирование и вывод>\n");
            f[0];
            break;
        case 2:
            printf("Вы выбрали <Динамическое создание и удаление>\n");
            f[1];
            break;
        case 3:
            printf("Вы выбрали <Произвольная длина массива>\n");          
            scanf_s("%d", &r);
            for (int i = 0; i < r; i++)
            {
                *(mas + i) = i;
                
            }
            printf("\n");
            f[4];

            break;
        case 4:
            printf("Вы выбрали <Треугольная матрица>\n");
            f[3];
            break;
        default:
            printf("Такой команды нет");
            break;
        }
        printf("\nВы хотите продолжить?\n 1-да\n0-нет\n");
        scanf_s("%d", &exit);
    }

    return 0;
}

redact()
{
    int pere = 1;

        while (pere == 1)
        {
            int i;
            int* p = &i;
            scanf_s("%d", p);
            printf("%p\n", *p);
            printf("Хотите редактировать число?\n1-да\n0-нет\n");
            scanf_s("%d", &pere);
            printf("Число в ячейке ");
            printf(" %d ", *p);
            
        }
    
}

dinammass()
{
    int n;
    scanf_s("%d", &n);
    int* a = malloc(n),sazeof(int);
    for (long i = 0; i < n; i++)
    {
        printf("%d", i);
        printf(" ");
        *(a+i);
    }
    int vix;
    printf("\nХотите удалить массив?\n1-да\n0-нет\n");
    scanf_s("%d", &vix);
    if (vix == 1)
    {
         free(a);
         printf("Массив успешно удален\n");
    }
    else if (vix == 0)
    {

    }
    else
    {
        printf("\nХотите удалить массив?\n1-да\n0-нет\n");
        scanf_s("%d", &vix);
    }

}
Treyg_massiv()
{
    printf("Введите размерность массива\n");
    int x;
    scanf_s("%d", &x);
    printf("\n");
    int** pp = malloc(x * sizeof(int));
    int ch = 0;
    for (int i = 0; i < x; i++)
    {
        *(pp+i) = malloc((i + 1) * sizeof(int));
        for (int j = 0; j <= i; j++)
        {
            *((*(pp+i))+j) = ch;
            ch++;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", *((*(pp + i)) + j));
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++)
    {
        free(*(pp + i));
    }
    free(pp);
}
Vivod_funkcii(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(a + i));
    }
}