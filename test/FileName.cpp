#include<stdio.h> 
#include<stdlib.h>
int compare(const void* e1, const void* e2)
{
	return (*(int *)e1-*(int *)e2);
}
int main()
{
	int arr[] = { 12,4,6,5,5,4,5,6,7,7,5,544,43,3445,6,7,53,322,5,56 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[1]), compare);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}
