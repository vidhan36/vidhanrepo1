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
 * @file stats.h 
 * @brief header file for assessment
 *
 * 
 *
 * @author Krishna Vidhan
 * @date 30/05/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief SOrts the array from largest to smallest
 *
 * 
 *
 * @param character array and size

 * @return unsigned char with return value of 0 to indicate end of sorting
 */
unsigned char sort_array(unsigned char *arr, unsigned int size);
/**
 * @brief prints the array 
 *
 * 
 *
 * @param character array and size

 * @return no return
 */
void print_array(unsigned char *arr, unsigned int size);
/**
 * @brief finds the median
 *
 * 
 *
 * @param character array and size

 * @return unsigned char value
 */
unsigned char find_median(unsigned char *arr, unsigned int size);
/**
 * @brief finds the mean
 *
 * 
 *
 * @param character array and size

 * @return unsigned char value
 */
char find_mean(unsigned char *arr, unsigned int size);
/**
 * @brief finds the maximum
 *
 * 
 *
 * @param character array and size

 * @return unsigned char value
 */
unsigned char find_maximum(unsigned char *arr, unsigned int size);
/**
 * @brief finds the minimum
 *
 * 
 *
 * @param character array and size

 * @return unsigned char value
 */
unsigned char find_minimum(unsigned char *arr, unsigned int size);
/**
 * @brief prints the minimum, maximum, mean, median
 *
 * 
 *
 * @param character array and size

 * @return no return
 */
void print_statistics(unsigned char *arr, unsigned int size);


#endif /* __STATS_H__ */
