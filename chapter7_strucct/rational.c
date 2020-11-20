#include <stdio.h>

/* 用分数表示有理数并实现相关运算，目的在于体会抽象分层 */

/* 底层存储方式 */
struct rational {
	int a, b;
};

/* 求两数最大公约数: 辅助算法 */
int get_GCD(int a, int b)
{
	if (a % b ==0) {
		return b;
	} else {
		return get_GCD(b, a % b);
	}
}

/* 存储表示层 */
int get_denominator(struct rational r)
{
	return r.b;
}

int get_numerator(struct rational r)
{
	return r.a;
}

struct rational make_rational(int a, int b)
{
	struct rational r;
	r.a = a;
	r.b = b;
	return r;
}

/* 算数运算层：与具体的存储方式无关 */
/* 加法 */
struct rational add_rational(struct rational r1, struct rational r2)
{
	int numerator1 = get_numerator(r1);
	int numerator2 = get_numerator(r2);
	int denominator1 = get_denominator(r1);
	int denominator2 = get_denominator(r2);

	int tmp_numerator = numerator1 * denominator2 + numerator2 * denominator1;
	int tmp_denominator = denominator1 * denominator2;

	int ret_GCD = get_GCD(tmp_numerator, tmp_denominator);
	int ret_numerator = tmp_numerator / ret_GCD;
	int ret_denominator = tmp_denominator / ret_GCD;
	return make_rational(ret_numerator, ret_denominator);

}

/* 减法 */
struct rational sub_rational(struct rational r1, struct rational r2)
{
	int numerator1 = get_numerator(r1);
	int numerator2 = get_numerator(r2);
	int denominator1 = get_denominator(r1);
	int denominator2 = get_denominator(r2);

	int tmp_numerator = numerator1 * denominator2 - numerator2 * denominator1;
	int tmp_denominator = denominator1 * denominator2;

	int ret_GCD = get_GCD(tmp_numerator, tmp_denominator);
	int ret_numerator = tmp_numerator / ret_GCD;
	int ret_denominator = tmp_denominator / ret_GCD;
	return make_rational(ret_numerator, ret_denominator);
}

/* 乘法 */
struct rational mul_rational(struct rational r1, struct rational r2)
{
	int numerator1 = get_numerator(r1);
	int numerator2 = get_numerator(r2);
	int denominator1 = get_denominator(r1);
	int denominator2 = get_denominator(r2);

	int tmp_numerator = numerator1 * numerator2;
	int tmp_denominator = denominator1 * denominator2;

	int ret_GCD = get_GCD(tmp_numerator, tmp_denominator);
	int ret_numerator = tmp_numerator / ret_GCD;
	int ret_denominator = tmp_denominator / ret_GCD;
	return make_rational(ret_numerator, ret_denominator);
}

/* 除法 */
struct rational div_rational(struct rational r1, struct rational r2)
{
	int numerator1 = get_numerator(r1);
	int numerator2 = get_numerator(r2);
	int denominator1 = get_denominator(r1);
	int denominator2 = get_denominator(r2);

	int tmp_numerator = numerator1 * denominator2;
	int tmp_denominator = denominator1 * numerator2;

	int ret_GCD = get_GCD(tmp_numerator, tmp_denominator);
	int ret_numerator = tmp_numerator / ret_GCD;
	int ret_denominator = tmp_denominator / ret_GCD;
	return make_rational(ret_numerator, ret_denominator);
}
/* 打印有理数 */
void print_rational(struct rational r)
{
	int numerator = get_numerator(r);
	int denominator = get_denominator(r);
	
	if (denominator == 0) {
		printf("Error:Divisor can not be zero");
	} else if (numerator == 0) {
		printf("%d\n", 0);
	} else if (numerator / denominator == 1) {
		printf("%d\n", 1);
	} else if (numerator / denominator == -1) {
		printf("%d\n", -1);
	} else {
		printf("%d/%d\n", numerator, denominator);
	}
}

int main(void)
{
	struct rational a = make_rational(1, 8); /* a = 1/8 */
	struct rational b = make_rational(-1, 8); /* b = -1/8 */

	print_rational(add_rational(a, b));
	print_rational(sub_rational(a, b));
	print_rational(mul_rational(a, b));
	print_rational(div_rational(a, b));

	return 0;
}
