#include "FunctionHeadersArrays1.h"
#include <stdio.h>
#include<conio.h>
struct student
{
	char name[40];
	int score;
}students1[3] = { { "stu1", 10 }, { "stu2", 20 }, { "stu3", 30 } };


int main(){

	int arr[12] = { 4, 4, 2, 2, 1, -5 };
	int len = removeArrayDuplicates(arr, 6);
	//printf("%d\n", len);

	int k;
	scoresDescendingSort(students1,3);
	/*for (k = 0; k < 3; k++)
	{
		printf("%s %d\n",students1[k].name,students1[k].score);
	}*/
	
/*

	
	int arr5[5] = { 10,20,30,40,50};
	sortedArrayPositionsChange(arr5,5);
	int i, j;
	
		



*/

struct student **result=topKStudents(students1,3,1);



	int arr2[5] = { 20, 40, 60, 80, 100 };

	int l, score = 40;
	int least = 0, more = 0;
	studentsCount(arr2, 5, score, &least, &more);
	//printf("%d leasatCount\n%d moreCount\n", least, more);
	int arr4[6]= { 2, 4, 10, 11, 12 };
	


	int *newarray = sortedArrayInsertNumber(arr4, 5, 12);
	
	//printf("\n%d\n",arr4[5]);
	//printf("%d %d %d %d %d %d\n", newarray[0], newarray[1], newarray[2], newarray[3], newarray[4], newarray[5]);
getch();	
	return 0;
}