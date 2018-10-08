#include<stdio.h>
#include<stdlib.h>

int main()
{
	double wei, hei;
	double BMI, weight, height;

	printf("Please enter the weight and height:");
	scanf_s("%lf%lf", &wei, &hei);
	height = hei / 100;
	weight = wei;
	BMI = weight / (height * height);
	printf("%.2f\n", BMI);

	if (BMI < 18.5) printf("Underweight\n");
	else if (18.5 < BMI < 24.9) printf("Normal\n");
	else if (25 < BMI < 29.9) printf("Overweight\n");
	else printf("Obese\n");

	system("pause");
	return 0;
}