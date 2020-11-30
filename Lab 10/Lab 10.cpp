/*Вариант 2. Операции «+», «-» и «*», созданные при выполнении задания «Перегрузка операций», 
реализовать как дружественные функции. В программе, использующей разработанный класс.*/

#include <cstdio>
#include <locale.h>
#include "SETNUM.h"
#pragma warning (disable:6064)

int main() {
	setlocale(LC_ALL, "RUS");
	int z = 0; char end = NULL;
	printf("Проинициализируйте множество числом [S1].\n");
	scanf_s("%d", &z);
	SETNUM S1(z);
	S1.Output();

	printf("Нажмите z чтобы завершить.\n");
	while (end != 'z') {
		printf("Введите число, которое следует добавить в множество [S1].\n");
		scanf_s("%d", &z);
		S1 += z;
		S1.Output();
		scanf_s("%c", &end); }
	printf("Числа добавлены.\n"); end = NULL;

	printf("Проинициализируйте множество числом [S2].\n");
	scanf_s("%d", &z);
	SETNUM S2(z);
	S2.Output();

	printf("Нажмите z чтобы завершить.\n");
	while (end != 'z') {
		printf("Введите число, которое следует добавить в множество [S2].\n");
		scanf_s("%d", &z);
		S2 += z;
		S2.Output();
		scanf_s("%c", &end); }
	printf("Числа добавлены.\n"); end = NULL;

	printf("Тесты дружественных функций. \n");
	printf("[S1] "); S1.Output();
	printf("[S2] "); S2.Output();

	printf("[Перегрузка +] ");
	SETNUM T1 = S1 + S2;
	T1.Output();

	printf("[Перегрузка -] ");
	SETNUM T2 = S1 - S2;
	T2.Output();

	printf("[Перегрузка *] ");
	SETNUM T3 = S1 * S2;
	T3.Output();

	S1.Output(); 
	S2.Output();
	printf("[Перегрузка >] %d", S1 > S2);
	

	/*
	S1.Output();
	S2.Output();
	printf("[Перегрузка ==] %d", S1 == S2);
	*/

	/*
printf("Введите заданное значение:\n");
scanf_s("%d", &z);
printf("Множество, элементы которого не превышают заданное значение [S2].\n");
SETNUM S2(S1, z);
S2.Output();
printf("Множество скопировано.\n");

while (end != 'z') {
	printf("Введите число, которое следует удалить из множества [S1].\n");
	scanf_s("%d", &z);
	S1 -= z;
	S1.Output();
	scanf_s("%c", &end);
}
printf("Числа удалены.\n"); end = NULL;
*/

	return 0;
}
