// profile.h --- ������� ��� ������ ������������� ����������� � ������ �������� �������� � Gnuplot
// �����

// ��. ����������
#include <stdio.h>


void	PROF_StartProfile();
// ������/���������� ������� �������

float	PROF_GetTimeElaspedMSec();
// ������ ���������� �����������, ���������� � ���������� ������ PROF_StartProfile();

void	PROF_StopProfile();
// ��������� �������

float	PROF_ProfileSort(int nElems,
	void (*sort_function)(void* array, int elem_size, int array_len, 
			int (*compare_function)(void* pA, void* pB), int ascending)
	);
// ����� �������, ���������� �� ���������� nElems ��������� �������� ����������, �������� ���������� *sort_function

void	PROF_PlotEfficiency(FILE* f,
	void (*sort_function)(void* array, int elem_size, int array_len, 
			int (*compare_function)(void* pA, void* pB), int ascending),
			int n_minElems, int n_maxElems);
// ���������� ������� ��������� ��������� ������� ���������� *sort_function � ������� gnuplot
// ������ �������� �� n_minElems �� n_maxElems
// ������ ��� Gnuplot ������� ��������� � ���� f.