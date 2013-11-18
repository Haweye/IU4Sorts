// sorts.h - ������� ����������
// ����������� - �����

// ����������� �������


// ������� �������
#include "comp.h"


void sort_pyramid(void* array, int elem_size, int array_len, 
	int (*compare_function)(void* pA, void* pB), int ascending);
/*	������������� ���������� ������������� ���� ������
	array		-	��������� �� ������ ��� ����������
	elem_size	-	������ ������ �������� � ������ (����. sizeof(int))
	array_len	-	����� ����� �������
	int (*compare_function)(void* pA, void* pB) -
				-	��������� �� �������, ������������ ��� �������� ��� ����������.
					�������� �� ���������.
					������ ��������� 0, ���� *pA >= *pB � 1 � ��������� ������.
					������� ������ � comp.h/comp.c.
	descending	-	1, ���� ������� ����������� �� ��������.
				-	0, ���� �� �����������.
*/

void sort_bubble(void* array, int elem_size, int array_len, 
	int (*compare_function)(void* pA, void* pB), int ascending);
/*	����������� ���������� ������������� ���� ������
	array		-	��������� �� ������ ��� ����������
	elem_size	-	������ ������ �������� � ������ (����. sizeof(int))
	array_len	-	����� ����� �������
	int (*compare_function)(void* pA, void* pB) -
				-	��������� �� �������, ������������ ��� �������� ��� ����������.
					�������� �� ���������.
					������ ��������� 0, ���� *pA >= *pB � 1 � ��������� ������.
					������� ������ � comp.h/comp.c.
	descending	-	1, ���� ������� ����������� �� ��������.
				-	0, ���� �� �����������.
*/
