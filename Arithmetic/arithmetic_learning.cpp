#include "stdio.h"

void BubbleSort(void)
{
	int a[10] = {54, 3, 7, 5, 12, 13, 1232, 8657, 96865, 434343};

	int i, j;
	int temp = 0;

	printf("Before sort : \n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for(j = 0; j < 10; j++)
	{
		for(i = 0; i < 9 - j; i++)
		{
			if(a[i] < a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	printf("After sort: \n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}

int main(void)
{
	printf("Begin my road!\n");

	/* 2014.3.18 : Bubble sort*/
	BubbleSort();
}