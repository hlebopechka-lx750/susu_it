#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1;  //Координаты первой точки
    int x2, y2;  //Координаты второй точки
    printf("Введите координаты первой точки:");
    scanf("%d %d", &x1, &y1);
    printf("Введите координаты второй точки:");
    scanf("%d %d", &x2, &y2);
    double distance = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));  //Вычисление расстояния между точками
    printf("Расстояние между точками (%d, %d) и (%d, %d) равно: %f\n", x1, y1, x2, y2, distance);
    return 0;
}