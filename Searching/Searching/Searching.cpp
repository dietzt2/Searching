
#include "Searching.h"


int serial_search(int *a, const int& start_index, const int& end_index, const int& target) {

	if (end_index - start_index == 0)
		return -1;

	int i = start_index;

	while (i <= end_index) {

		if (a[i] == target)
			return i;
		++i;
	}
	return -1;
}

void binary_search(int *a, const int& start_index, const int& length, const int& target, int& location) {
	
	int mid = start_index + (length / 2);
	if (length == 0)
		location = -1;
	else {
		if (target == a[mid]) 
			location = mid;
		else if (target < a[mid])
			binary_search(a, start_index, (length / 2), target, location);
		else
			binary_search(a, mid + 1, (length - 1) / 2, target, location);
	}
}