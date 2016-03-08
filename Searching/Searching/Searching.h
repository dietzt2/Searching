

//Searches an array of integers for 'target' from start_index to end_index (inclusive end)
//Returns the index of the location if it is found, or -1 if not in the array
//The array need not be sorted to produce correct results
int serial_search(int *a, const int& start_index, const int& end_index, const int& target);


//Searches an array of integers for 'target' from start_index to length (non-inclusive end)
//Changes 'location' to the index found if it is found, or -1 if not in the array
//The array array must be sorted prior to calling this function
void binary_search(int *, const int& start_index, const int& length, const int& target, int& location);