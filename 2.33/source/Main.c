#include<stdio.h>
#include<stdlib.h>

int main()
{
	double a, b, c, d, e, total;
	printf("�п�J�@��Ѫ��`���{��:");
	scanf_s("%lf", &a);
	printf("�п�J�T�o�@����/�[�ڦh�ֿ�:");
	scanf_s("%lf", &b);
	printf("�п�J�����@����/�[�گ��p�h�֤���:");
	scanf_s("%lf", &c);
	printf("�п�J�@�Ѫ������O:");
	scanf_s("%lf", &d);
	printf("�п�J�@�Ѫ��q��O(�L���O):");
	scanf_s("%lf", &e);
	total = (a / c) * b + d + e;
	printf("�z�Ҫ�O�����B��%.2f\n", total);
	system("pause");
	return 0;
}