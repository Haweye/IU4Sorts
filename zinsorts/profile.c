#include "profile.h"

void	PROF_StartProfile() {
	// ������: ����������
}
// ������/���������� ������� �������

float	PROF_GetTimeElaspedMSec() {
	// ������: ����������
	return 0.0;
}


void	PROF_StopProfile() {
	// ������: ����������
}

float	PROF_ProfileSort(int nElems,
	void (*sort_function)(void* array, int elem_size, int array_len, 
			int (*compare_function)(void* pA, void* pB), int ascending)
	) {
	// ������: ����������
	return 0.0;
}

void	PROF_PlotEfficiency(FILE* f,
	void (*sort_function)(void* array, int elem_size, int array_len, 
			int (*compare_function)(void* pA, void* pB), int ascending),
			int n_minElems, int n_maxElems) {

	// ������: ����������
}