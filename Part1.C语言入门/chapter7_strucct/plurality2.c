#include <stdio.h>
#include <math.h>

/* 用struct实现复数的表示并实现复数的加法 */

struct plurality{
	double r,A;
};


/* 求实部 */
double real_part(struct plurality p1)
{
	return p1.r * cos(p1.A);
}

/* 求虚部 */
double img_part(struct plurality p1)
{
	return p1.r * sin(p1.A);
}

/* 求极坐标的模 */
double magnitude(struct plurality p)
{
	return p.r;
}

/* 求极坐标的辅角 */
double angle(struct plurality p)
{
	return p.A; 
}

/* 从实数构造复数 */
struct plurality make_from_real_img(double x, double y)
{
	struct plurality z;
	z.r = sqrt(x * x + y * y);
	z.A = atan2(y, x);
	return z;
}

/* 从极坐标构造复数 */
struct plurality make_from_mag_ang(double r, double A)
{
	struct plurality z;
	z.r = r;
	z.A = A;
	return z;
}

/* 加法 */
struct plurality add_plurality(struct plurality p1, struct plurality p2)
{
	return make_from_real_img(real_part(p1) + real_part(p2),
				   img_part(p1) + img_part(p2));
}


/* 减法 */
struct plurality sub_plurality(struct plurality p1, struct plurality p2)
{
	return make_from_real_img(real_part(p1) - real_part(p2),
				   img_part(p1) - img_part(p2));
}

/* 乘法 */
struct plurality mul_plurality(struct plurality p1, struct plurality p2)
{
	return make_from_mag_ang(magnitude(p1) * magnitude(p2),
				 angle(p1) + angle(p2));
}

/* 除法 */
struct plurality div_plurality(struct plurality p1, struct plurality p2)
{
	return make_from_mag_ang(magnitude(p1) / magnitude(p2),
				 angle(p1) - angle(p2));
}

/* 打印 */
void print(struct plurality p)
{
	double realn = real_part(p);
	double imgn = img_part(p);
	if (realn == 0.0) {
		printf("%fi\n", imgn);
	} else if (imgn == 0.0) {
		printf("%f\n", realn);
	} else if (imgn == 0.0 && realn == 0.0) {
		printf("%f\n", 0.0);
	} else if (imgn > 0) {
		printf("%f+%fi\n", realn, imgn);
	} else if (imgn < 0) {
		printf("%f%fi\n", realn, imgn);	
	}
}

int main(void)
{
	struct plurality p1, p2, result;
	p1.r = 5.0;
	p1.A = 30.0;
	p2.r = 5.0;
	p2.A = 60.0;

	result = add_plurality(p1, p2);
	print(result);
	
	result = sub_plurality(p1, p2);
	print(result);
	
	result = mul_plurality(p1, p2);
	print(result);
	
	result = div_plurality(p1, p2);
	print(result);
	
}
