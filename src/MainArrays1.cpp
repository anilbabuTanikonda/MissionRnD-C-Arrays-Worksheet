#include "FunctionHeadersArrays1.h"
#include <stdio.h>
#include<conio.h>
#include<malloc.h>
struct student
{
	char name[40];
	int score;
}students1[3] = { { "stu1", 50 }, { "stu2", 60 }, { "stu3", 70 } };



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

	
	
	int i, j;
	
		+
		+



		*/	
	int arr5[5] = { 10, 20, 30, 40, 50 };
	sortedArrayPositionsChange(arr5, 5);

   struct student **result=topKStudents(&students1,3,2);
   
   
   printf("%d ", (*result + 0)->score);
   printf("%d ", (*result + 1)->score);
   printf("%d ", (*result + 2)->score);
 





	int arr2[5] = { 20, 40, 60, 80, 100 };

	int l, score = 40;
	int least = 0, more = 0;
	studentsCount(arr2, 5, score, &least, &more);
	//printf("%d leasatCount\n%d moreCount\n", least, more);
	int *arr4,i;
	arr4 = (int *)malloc(5 * sizeof(int));
	arr4[0] = 2;
	arr4[1] = 4;
	arr4[2] = 6;
	arr4[3] = 8;
	arr4[4] = 12;


	arr4= sortedArrayInsertNumber(arr4, 5, 12);
	
	
	
	//printf("%d %d %d %d %d %d\n", newarray[0], newarray[1], newarray[2], newarray[3], newarray[4], newarray[5]);
getch();	
	return 0;
}

