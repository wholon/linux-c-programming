#include <stdio.h>
#include <math.h>

/* 程序功能：计算面积 */

/* 函数功能：计算两点间距离 */
double distance(double x1, double y1, double x2, double y2)
{
	double dx = x1 - x2;
	double dy = y1 - y2;

	return sqrt(dx * dx + dy * dy);
	
}
/* 函数功能：给出半径，计算面积 */
double area(double radius)
{
	return 3.1415 * radius * radius;
}

int main(void)
{
	double x1 = 1.0;
	double y1 = 2.0;
	double x2 = 4.0;
	double y2 = 6.0;

	double radius = distance(x1, y1, x2, y2) / 2;
	double aarea = area(radius);

	printf("(%f, %f) and (%f, %f) area is %f\n", x1, y1, x2, y2, aarea);

	return 0;
}
