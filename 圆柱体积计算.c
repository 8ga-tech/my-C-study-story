#include <stdio.h>
#define PI 3.14159

int main() {
	double r, h, v;
	printf("����Բ���뾶�͸�:");
	scanf_s("%lf %lf", &r, &h);
	v = PI * r * r * h;
	printf("Բ������ǣ� %.3f\n", v);
	return 0;
}