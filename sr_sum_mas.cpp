// Нахождение средней суммы элементов массива:

#include <iostream>
#include "Header.h"
#include "Operations_mas.h"
#include <string>

struct Vec {
	double* x;
};

int main()
{
	setlocale(LC_ALL, "Rus");

	double sum = 0;
	double sr;
	Vec obj_vec;
	obj_vec.x = new double[5];
	for (int i = 0; i < 5; i++) {
		obj_vec.x[i] = i + 1;
		sum = sum + obj_vec.x[i];
	}
	sr = sum / 5;
	std::cout << "Среднее значение массива: " << sr << std::endl;

	delete[] obj_vec.x;
}