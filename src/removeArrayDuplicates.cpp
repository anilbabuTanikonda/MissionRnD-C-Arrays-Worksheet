/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{

	int j, k, l, n = 0, i = 0;
	if (len == 0 || len<0 || Arr<0 || Arr==NULL)
		return -1;
	while (i < len)
	{
		k = 0;
		for (j = i + 1; j < len; j++)
		{
			if (Arr[i] == Arr[j])
			{
				k = j;
				n++;
				break;
			}
		}
		if (k != 0)
		{
			len = len - 1;
			for (l = k; l < len; l++)
			{
				Arr[l] = Arr[l + 1];
			}
		}
		else
			i++;
	}

	return len;
}