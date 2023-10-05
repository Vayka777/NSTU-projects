// Нахождение сумм и произведений
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int g;
	int i, N;
	float y = 1;
	int p = 1;
	long long int f = 1;
	double d = 1;
	long double q = 1;

	printf("Input N: ");
	scanf_s("%d", &N);
	//i = sizeof(f);
	//printf("i = %d", i);
	printf("            int                        long                       float                     double                long double\n");
	for (i = 1; i <= N; i++)
	{
		printf("%d ", i);
		p = p * i;
		y = y * i;
		f = f * i;
		d = d * i;
		q = q * i;

		printf("%12d        ", p);
		printf("%20lld       ", f);
		printf("%20.0f      ", y);
		printf("%20.0lf     ", d);
		printf("%20.0llf\n", q);
	}
	g = _getch();
}