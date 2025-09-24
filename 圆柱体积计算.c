#include <stdio.h>
#define PI 3.14159

int main() {
	double r, h, v;
	printf("输入圆柱半径和高:");
	scanf_s("%lf %lf", &r, &h);
	v = PI * r * r * h;
	printf("圆柱体积是： %.3f\n", v);
	return 0;
}