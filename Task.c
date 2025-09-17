#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	// дано:
	float kol_dom = 1;
	float brig1_days = 45;
	float brig2_days = 30;

	// расчёт производиельности отдельно:
	float proizv_1 = kol_dom / brig1_days;
	float proizv_2 = kol_dom / brig2_days;

	// расчёт общей производительности:
	float proizv_12 = proizv_1 + proizv_2;

	// расчёт количества дней строительства общего:
	float brig12_days = kol_dom / proizv_12;

	// форматированный вывод результатов:
	printf("РАСЧЁТ КОЛИЧЕСТВА ДНЕЙ ДЛЯ ПОСТРОЙКИ ДОМА ДВУМЯ БРИГАДАМИ\n");
	printf("=========================================================\n\n");
	printf("УСЛОВИЯ:\n");
	printf("- Время строительства 1й бригады: %.0f дней\n", brig1_days);
	printf("- Время строительства 2й бригады: %.0f дней\n", brig2_days);
	printf("- Количество домов для расчёта: %.0f\n\n", kol_dom);
	printf("РЕШЕНИЕ:\n");
	printf("- Производительность 1й бригады: %.0f / %.0f = %f\n", kol_dom, brig1_days, proizv_1);
	printf("- Производительность 2й бригады: %.0f / %.0f = %f\n", kol_dom, brig2_days, proizv_2);
	printf("- Общая производительность: %f + %f = %f\n", proizv_1, proizv_2, proizv_12);
	printf("- Время постройки дома двумя бригадами: %f / %f = %.0f\n", kol_dom, proizv_12, brig12_days);
	printf("==========================================================\n\n");
	printf("ДЛЯ СТРОИТЕЛЬСТВА ДОМА ДВУМ БРИГАДАМ ПОТРЕБУЕТСЯ: %.0f дней\n", brig12_days);
	return 0;
}