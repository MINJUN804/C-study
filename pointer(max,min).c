#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
/*
void func(int *arr, int size, int** mxptr, int** mnptr)
{
	int* max;
	int* min;
	int i;
	max = min = &arr[1];
	for (i = 0; i < size; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];

	}
	*mxptr = max;
	*mnptr = min;

}
int main(void)
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("number: ");
		scanf("%d ", &arr[i]);
	}
	int* maxptr;
	int* minptr;

	func(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr);
	printf("max num:%d , min num:%d", *maxptr, *minptr);
	return 0;

}
*/