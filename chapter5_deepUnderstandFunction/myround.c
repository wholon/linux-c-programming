#include<stdio.h>
#include<math.h>

/* myround: 四舍五入 */

double myround(double x)
{
	return (double)(int)(x + 0.5);
}

int main(void)
{
	double x = -3.51;
	double y = 4.49;

	printf("%lf = %.1f\n", x, myround(x));
	printf("%lf = %.1f\n", y, myround(y));

	return 0;
}
