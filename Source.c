#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846


int task_1();
int task_2();
int homework();


int main()
{
	//task_1();
	//task_2();
	homework();
}

int task_1()
{
	double gr, rad;
	setlocale(LC_ALL, "ru_RU.UTF-8"); 
	puts("Введите градус: ");
	scanf("%lf", &gr);
	rad = gr * M_PI / 180;
	printf("Синус %g из градусов в радианы - %.6f", gr, sin(rad));
}

int task_2()
{
	//8 вариант
	double c,x,y,b,a;
	setlocale(LC_ALL, "ru_RU.UTF-8");
	c = 1.3;
	puts("Введите x: ");
	scanf("%lf", &x);
	a = pow(c, 3) + log(fabs(x));
	b = pow(a, 2) + sqrt(c);
	y = exp(x) + pow(5.8, -b);
	printf("y = %f\n", y);
	printf("b = %f\n", b);
	printf("a = %f\n", a);

	//3 
	int A = (int)a, B = (int)b, C = (int)y;
	printf("A = %d, B = %d, C = %d\n", A, B, C);
	int res_a = (A % 2 == 0) ^ (B % 2 == 0);
	printf("а) Только одно из чисел А и В четное. Условие выполнено (1 - да, 0 - нет) = %d\n", res_a);
	int res_b = (A%3==0) && (B&3==0) && (C%3==0);
	printf("б) Каждое из чисел А,В,С кратно трем.  словие выполнено (1 - да, 0 - нет) = %d\n", res_b);

}

int homework() 
{
	//26 вариант
	double x, y;
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите x, y:");
	scanf("%lf %lf", &x, &y);
	double f = ( (1 + pow(sin(x+y),2))/(2 + fabs( x-(2*x)/(1+pow(x,2)*pow(y,2)) )) + x);
	printf("f(x,y) = %f\n", f);

}



