#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = (int)size - 1;
    int mid;
    
    if (!array)
    {
        return (-1);
    }
    
    while (left <= right)
    {
        mid = (right + left) / 2;
        if (array[mid] == value)
        {
            return (mid);
        }else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        
    }
    return (-1);
}
