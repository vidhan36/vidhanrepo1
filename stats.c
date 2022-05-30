/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Added some functions here
 *
 * Peer graded assignment for week1
 *
 * @author Krishna Vidhan
 * @date 30/05/2022 
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char *arr, unsigned int size)
{
printf("The array is printed below:\n");
for(int i=0;i<size;i++)
{
printf("%d ", *(arr + i)); 
}
printf("\n");
}

unsigned char find_median(unsigned char *arr, unsigned int size){
sort_array(arr,size);
int median=0;
size--;
if ( size % 2 == 0)
   median = (arr[size/2] + arr[size/2+1])/2.0 ;
else
   median = arr[size/2 + 1];

return median;
}
char find_mean(unsigned char *arr, unsigned int size)
{
int index = 0;
for(int i=0;i < size; i++)
{
index = index + *(arr + i);
}
return index/size;

}
unsigned char find_maximum(unsigned char *arr, unsigned int size)
{
unsigned char max=0, pres=0;
for(int i=0;i<size;i++)
{
       pres = *(arr+i);
	 if(max < pres)
	{
	max = pres;
	}
	
}
  
return max;

}
unsigned char find_minimum(unsigned char *arr, unsigned int size)
{
unsigned char min, pres;
for(int i=0;i<size;i++)
{
       pres = *(arr+i);
       if(min > pres)
	{
	 min = pres;
	}
	
}
return min;

}
unsigned char sort_array(unsigned char *arr, unsigned int size){
void swap(unsigned char i, unsigned char j)
	{
	unsigned char temp;
	temp  = *(arr+j);
	*(arr+j) = *(arr+i);
	*(arr+i) = temp;
	}
int partition(unsigned char low,unsigned char high)
{
int pivot = *(arr+low);
 int i=low;
 int j=high;
 while(i<j)
  {
	do
	{
	i++;
	}while(*(arr+i) <= pivot);

	do
	{
	j--;
	}while(*(arr+j) > pivot);
  if(i<j)
   {
    swap(i,j);   
   }
  
  }
 
 swap(low, j);

 return j;
}
int Quicksort(unsigned char low, unsigned char high)
{

int j=0;
if(low<high)
	{
	 //    printf("entered quick sort with j value: %d\n",j);
	j = partition(low, high);
   //printf("entered quick sort with j value: %d\n",j);
	Quicksort(low, j);
	Quicksort(j+1,high);
	}
	return 2;
}

int g=Quicksort(0, size);
if(g==2)
{
int temp,start=0,end=size-1;
while(start < end)
	{
	temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
	}
}
return 0;
}
void print_statistics(unsigned char *arr, unsigned int size)
{
printf("minimum: %hhu , maximum: %hhu , mean: %hhu , median: %hhu \n",find_minimum(arr,size),find_maximum(arr,size),find_mean(arr,size),find_median(arr,size));

}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
/*sort_array(test, SIZE);
print_array(test, SIZE);*/
//print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
