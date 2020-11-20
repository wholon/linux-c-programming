#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20


int a[N];

void gen_random(int upper_bound)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < N; i++) {
		a[i] = rand() % upper_bound;
	}
}

void print_random()
{
	int i;
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int howmany(int value)
{
	int count = 0, i;
	for (i = 0; i < N; i++) {
		if (a[i] == value) {
			++count;
		}
	}

	return count;
}

void print_histogram()
{
	int i, j;
	for (i = 0; i < 10; i++) {
		printf("%d\t", i);
	}
	printf("\n");
	printf("\n");
	
	int count[10] = {0};
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (count[j] >= howmany(j)) {
				printf("\t");
			} else {
				printf("*\t");
			}
			count[j] = count[j] + 1;
		} 
		printf("\n");
	}

}

int main(void)
{
	int i, histogram[10] = {0};
	gen_random(10);
	//print_random();
	printf("value\thowmany\n");
	for (i = 0; i < 10; i++) {
		histogram[i] = howmany(i);
		printf("%d\t%d\n", i, histogram[i]);
	} 
	print_histogram();
	return 0;
}
