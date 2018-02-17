/******************************************************************************
 * Copyright (C) 2018 by William Dallari
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. William Dallari is not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <This files includes the implementation of the functions defined in 
 * the "stats.h" header file>
 *
 * @author <WD-cloud7777>
 * @date <16.02.2018>
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("\nOriginal Array:\n");
  print_array(test,SIZE);

  print_statistics(test,SIZE);

}

/* 1.  To determine the median value of an array of N data samples, the data array must be sorted first;
   2a. If N is even, the median is determined by calculating the arithmetic mean of the element located at position (N/2-1) and N/2;
   2b. If N is odd, the median corresponds to the element located at position (N-1)/2.
*/

unsigned char find_median(unsigned char* a, unsigned int N)
{
 unsigned char median=0;

 sort_array(a,N); // step 1.

 (N%2==0) ? median= ((a[N/2-1]+a[N/2])/2) : (median=a[(N-1)/2]); // step 2a : 2b

 return median;
}

unsigned char find_mean(unsigned char* a, unsigned int N)
{
 unsigned int sum=0, avg=0;

 for(unsigned int i=0;i<N;i++)
     sum+=a[i];

 return avg=sum/N;
}

unsigned char find_maximum(unsigned char* a, unsigned int N)
{
 unsigned char max=a[0];

 for(unsigned int i=1;i<N;i++)
     if(max<a[i])
         max=a[i];

 return max;
}

unsigned char find_minimum(unsigned char* a, unsigned int N)
{
 unsigned char min=a[0];

 for(unsigned int i=0;i<N-1;i++)
     if(min>a[i])
         min=a[i];

 return min;
}

void swap(unsigned char* xp, unsigned char* yp)
{
 unsigned char temp=*xp;
 *xp=*yp;
 *yp=temp; 
}

void sort_array(unsigned char* a, unsigned int N)
{
 for(unsigned int i=0;i<N-1;i++)
     for(unsigned int j=0;j<N-i-1;j++)
         if(a[j+1]>a[j])
             swap(&a[j],&a[j+1]);
}

void print_array(unsigned char* a, unsigned int N)
{
 for(unsigned int i=0;i<N;i++)
     printf("%d ",a[i]);

 printf("\n");
}

void print_statistics(unsigned char* array, unsigned int size)
{
 unsigned char median_val=0,mean_val=0,max_val=0,min_val=0;
 
 printf("\nSorted Array:\n");
 print_array(array,size);
 
 printf("\n************************");
 printf("\nStatistics of the array:");
 printf("\n- Median Value:  %d", median_val= find_median(array,size));
 printf("\n- Mean Value  :  %d", mean_val   = find_mean(array,size));
 printf("\n- Max Value   : %d", max_val    = find_maximum(array,size));
 printf("\n- Min Value   :   %d", min_val  = find_minimum(array,size));
 printf("\n************************");
 printf("\n");
}
