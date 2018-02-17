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
 * @file    <"stats.h"> 
 * @brief   <This file includes declarations and documentation for the functions 
 *           implemented in the "stats.c" file>
 *
 * @author  <WD-cloud7777>
 * @date    <16.02.2018>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief <Prints the statistics (minimum, maximum, mean, and median) of an array of unsigned char having a given legth>
 *
 * This function takes as input an array of unsigned char and an unsigned integer 
 * indicating the size of such an array. This will print minimum, maximum, mean, and median
 * value of the data contained in the array 
 *
 * @param <unsigned char* array>  <The data array>
 * @param <unsigned int size>     <The size of the array>
 *
 * @return <void>
 */
void print_statistics(unsigned char* array, unsigned int size);

/**
 * @brief <Prints an array of unsigned char having a given legth to the screen>
 *
 * This function takes as input an array of unsigned char and an unsigned integer 
 * indicating the size of such an array. This will print the data contained in the array to 
 * the screen 
 *
 * @param <unsigned char* array>  <The data array>
 * @param <unsigned int size>     <The size of the array>
 *
 * @return <void>
 */
void print_array(unsigned char* a, unsigned int N);

/**
 * @brief <Returns the median value of an array of unsigned char having a given legth>
 *
 * This function takes as input an array of unsigned char and an unsigned integer 
 * indicating the size of such an array. This will return the median value of the data 
 * contained in the array.
 *
 * @param <unsigned char* a>  <The data array>
 * @param <unsigned int N>    <The size of the array>
 *
 * @return <The median value of the data contained in the array>
 */
unsigned char find_median(unsigned char* a, unsigned int N);

/**
 * @brief <Returns the mean value of an array of unsigned char having a given legth>
 *
 * This function takes as input an array of unsigned char and an unsigned integer 
 * indicating the size of such an array. This will return the mean value of the data 
 * contained in the array.
 *
 * @param <unsigned char* a>  <The data array>
 * @param <unsigned int N>    <The size of the array>
 *
 * @return <The mean value of the data contained in the array>
 */
unsigned char find_mean(unsigned char* a, unsigned int N);

/**
 * @brief <Returns the maximum value of an array of unsigned char having a given legth>
 *
 * This function takes as input an array of unsigned char and an unsigned integer 
 * indicating the size of such an array. This will return the maximum value of the data 
 * contained in the array.
 *
 * @param <unsigned char* a>  <The data array>
 * @param <unsigned int N>    <The size of the array>
 *
 * @return <The maximum value of the data contained in the array>
 */
unsigned char find_maximum(unsigned char* a, unsigned int N);

/**
 * @brief <Returns the minimum value of an array of unsigned char having a given legth>
 *
 * This function takes as input an array of unsigned char and an unsigned integer 
 * indicating the size of such an array. This will return the minimum value of the data 
 * contained in the array.
 *
 * @param <unsigned char* a>  <The data array>
 * @param <unsigned int N>    <The size of the array>
 *
 * @return <The minimum value of the data contained in the array>
 */
unsigned char find_minimum(unsigned char* a, unsigned int N);

/**
 * @brief <Sorts an array of unsigned char having a given legth from the largest element [0th element] to the 
 * smallest [last element, i.e.,(n-1)th element]>
 *
 * This function takes as input an array of unsigned char and an unsigned integer 
 * indicating the size of such an array. This will sort the array from the largest element, 
 * which will be placed at the 1st position of the sorted array, to the smallest element,
 * which will be placed at the last position of the sorted array. 
 *
 * @param <unsigned char* a>  <The data array>
 * @param <unsigned int N>    <The size of the array>
 *
 * @return <void>
 */
void sort_array(unsigned char* a, unsigned int N);

#endif /* __STATS_H__ */
