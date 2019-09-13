#include <vector>
#include "search.h"

bool binarySearch(const std::vector<int>& set, int value)
{
	size_t left =0;
	size_t right = set.size() - 1;
	while (true)
	{
		size_t mid = (left + right) / 2;
		if( set[mid] == value)
			return true;
		if (left == right)
			return false;
		if (set[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	while(*begin < *end){
		const int *mid = begin + (end - begin) / 2;
	if (*begin == *end)
		return false;
	if (*mid == *end)
		return false;
			if (*mid == value)
				return true;
	if(*mid > value) {
	end = mid - 1;
	}
	else {
		begin = mid + 1;
	}
	}
	return false;
}

