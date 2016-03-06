/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>
int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	
	
	int i, j=-1, k,*a;
	
	if (Arr==NULL || len==0 || len<0 || Arr<0)
	return NULL;
	k = len + 1;
	a = (int *)malloc(k*sizeof(int));
	
	for (i = 0; i < len; i++)
	{
		a[i] = Arr[i];
	}
	
	
	
	
	
	
	for (i = 0; i < len; i++)
	{
		if (a[i]>num || a[i]==num)
		{
			j = i;
			break;
			
		}
	}
	if (j == 0)
	{
		for (i = 1; i <= len; i++)
		{
			a[i] = a[i - 1];
		}
		a[0] = num;
	}
	else  if (j == len-1)
	{
		a[len] = num;
	}
	else if (j !=-1)
	{
		
		for (i = len; i>j; i--)
		{
			a[i] = a[i-1];
			

		}
		len++;
		a[j] = num;
	}
	
	

	

	
	
	return a;
}			