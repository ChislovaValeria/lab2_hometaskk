#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	// ����:
	float kol_dom = 1;
	float brig1_days = 45;
	float brig2_days = 30;

	// ������ ����������������� ��������:
	float proizv_1 = kol_dom / brig1_days;
	float proizv_2 = kol_dom / brig2_days;

	// ������ ����� ������������������:
	float proizv_12 = proizv_1 + proizv_2;

	// ������ ���������� ���� ������������� ������:
	float brig12_days = kol_dom / proizv_12;

	// ��������������� ����� �����������:
	printf("���ר� ���������� ���� ��� ��������� ���� ����� ���������\n");
	printf("=========================================================\n\n");
	printf("�������:\n");
	printf("- ����� ������������� 1� �������: %.0f ����\n", brig1_days);
	printf("- ����� ������������� 2� �������: %.0f ����\n", brig2_days);
	printf("- ���������� ����� ��� �������: %.0f\n\n", kol_dom);
	printf("�������:\n");
	printf("- ������������������ 1� �������: %.0f / %.0f = %f\n", kol_dom, brig1_days, proizv_1);
	printf("- ������������������ 2� �������: %.0f / %.0f = %f\n", kol_dom, brig2_days, proizv_2);
	printf("- ����� ������������������: %f + %f = %f\n", proizv_1, proizv_2, proizv_12);
	printf("- ����� ��������� ���� ����� ���������: %f / %f = %.0f\n", kol_dom, proizv_12, brig12_days);
	printf("==========================================================\n\n");
	printf("��� ������������� ���� ���� �������� �����������: %.0f ����\n", brig12_days);
	return 0;
}