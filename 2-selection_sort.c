#include "sort.h"


/**
 * swap - swap two numbers
 * @a: first number
 * @b: second number
 **/

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * selection_sort - sort array using selection sort algorithm
 * @array: array
 * @size: size of array
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}

}
