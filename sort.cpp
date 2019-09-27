#include <vector>
#include "sort.h"
#include "search.h"
void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubblesort (int *begin, const int *end)
{
	for (int *x = begin; x != end; ++x)
	{
		for (int *y = x + 1; y != end; ++y)
		{
			if (*x > *y)
				swap(x, y);
		}
	}
}
