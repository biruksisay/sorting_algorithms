#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascedning order
 *  using the selection sort algorithm.
 *@array: The array to be sorted
 *@size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, jmin, jtmp;
int itmp;

for (i = 0; i < size - 1; i++)
{
jmin = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[jmin])
{
jmin = j;
}
}
if (jmin != i)
{
itmp = array[i];
jtmp = jmin;
array[i] = array[jmin];
array[jtmp] = itmp;
print_array(array, size);
}
}
}
