/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
void * sortedArrayPositionsChange(int *Arr, int len)
{
	int t;
	if (len==0 || len<0 || Arr==NULL || Arr<0)
	return NULL;
	
	t = Arr[1];
	Arr[1] = Arr[3];
	Arr[3] = t;
	t = Arr[0];
	Arr[0] = Arr[len - 1];
	Arr[len - 1] = t;
	


	

}