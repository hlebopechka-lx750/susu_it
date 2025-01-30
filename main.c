#include <stdio.h>
#include <math.h>

int main() //алгоритм расчета
{
    double x1, y1;  //Координаты первой точки
    double x2, y2;  //Координаты второй точки
    printf("Введите координаты первой точки:");
    scanf("%lf %lf", &x1, &y1);
    printf("Введите координаты второй точки:");
    scanf("%lf %lf", &x2, &y2);
    double distance = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));  //Вычисление расстояния между точками
    printf("Вычисленное расстояние между двумя точками: (%f, %f) и (%f, %f) равно: %f\n", x1, y1, x2, y2, distance);
    return 0;
}