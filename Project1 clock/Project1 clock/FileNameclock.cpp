#include <cstdio>
#include <cstdlib>
#include <ctime>

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + i;
	}
	return sum;
}

int sum_of_N2(int n)
{
	return(n * (n + 1)) / 2;
}

int main(void)
{
	clock_t start, finish;
	double  durataion;

	for (int i = 0; i < 10; i++) {
		start = clock();
		int sum = sum_of_N(10000000);
		finish = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("합계%d 이고, $f 초입니다.Wn", sum, durataion);
	}

	return 0;
}