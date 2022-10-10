#include"sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorith.
 *
 * @array: Array of integers to be sorted
 * @size: The size of the @array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
for (j = 0; j < size; j++)
{
for (i = 0; i < size - 1 - j; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
}
}
}
