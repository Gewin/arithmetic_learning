#include "stdio.h"
#include "string.h"

#define MAX_NUM       10

void BubbleSort(int *data)
{
	int i, j;
	int tempData[MAX_NUM];
	int temp = 0;

	printf("Begin bubble sort\n");


	memcpy(tempData, data, MAX_NUM * sizeof(int));

	for(j = 0; j < 10; j++)
	{
		for(i = 0; i < 9 - j; i++)
		{
			if(tempData[i] < tempData[i+1])
			{
				temp = tempData[i];
				tempData[i] = tempData[i+1];
				tempData[i+1] = temp;
			}
		}
	}
	printf("After bubble sort: \n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", tempData[i]);
	}
	printf("\n\n");
}

void SelectionSort(int *data, int length)
{
	int temp;
	int i, j, index;
	int tempData[MAX_NUM];

	printf("Begin selection sort\n");

	memcpy(tempData, data, MAX_NUM * sizeof(int));

	for(i = 0; i < length; i++)
	{
		int index = i;
		for(j = i + 1; j < length; j++)
		{
			if(tempData[j] < tempData[index])
				index = j;
		}
		if(index != i)
		{
			temp = tempData[i]; tempData[i] = tempData[index]; tempData[index] = temp;
		}
	}
	printf("After selection sort: \n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", tempData[i]);
	}
	printf("\n\n");
}

int main(void)
{
	int i;
	printf("Begin my road!\n");

	int data[MAX_NUM] = {54, 3, 7, 5, 12, 13, 1232, 8657, 96865, 434343};

	printf("Before sort : \n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");


	/* 2014.3.18 : Bubble sort*/
	BubbleSort(data);

	/* 2014.3.20 : Selection sort */
	SelectionSort(data, MAX_NUM);
}