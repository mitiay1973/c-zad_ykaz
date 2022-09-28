#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
int (*f[4])();
int func(int (*f1)(int, int), int a, int b);
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int r = 0;
    int* mas = calloc(r, sizeof(int));
    f[0] = redact();
    f[1] = dinammass();
    f[2] = Treyg_massiv();
    f[3] = Vivod_funkcii(mas, r);
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
    int* a = malloc(n), sazeof(int);
    for (long i = 0; i < n; i++)
    {
        printf("%d", i);
        printf(" ");
        *(a + i);
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
        *(pp + i) = malloc((i + 1) * sizeof(int));
        for (int j = 0; j <= i; j++)
        {
            *((*(pp + i)) + j) = ch;
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