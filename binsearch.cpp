#include <vector>
#include "search.h"



bool binarySearch(const std::vector<int>& set, int value)
{
	size_t left = 0;
	unsigned int right = set.size();

	while (true)
	{
		size_t mid = (right + left)/ 2;
		if (left == right){
			return false;
	}
		if (set[mid] == value){
			return true;
		}
		if (set[mid] > value){
			right = mid;
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
	while (true)
	{	
	const int *mid = begin + (end - begin)/2;
	
	if (mid == end){
		return false;
	}
	if (*mid == value)
	{
		return true;
	}
	if (*mid > value){
		end = mid;
	}
	else 
		begin = mid + 1;
	}

	return false;
}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
	{	
	const int *mid = begin + (end - begin)/2;
	
	if ((begin > end) || (begin == end)){
		return false;
	}
	if (*mid == value)
	{
		return true;
	}
	if (*mid > value){
		return binarySearchRecursive(begin, mid, value);
	}
	else 
		return binarySearchRecursive(mid + 1, end, value);
	}

	return false;

}	

