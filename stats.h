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
 * @brief Header file to declare functions that analyze an array and calculates mean, median, 
 * maximum and minimum number. It also sorts the array in ascending order and prints
 * it.
 * @author Rutvi Patel
 * @date 07/12/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Find the median of the given data set
 *
 * @param data_array data set to find median
 * @param size_of_array number of elements in the data set
 *
 * @return the median of the givem data set
 */
unsigned char find_median(unsigned char* data_array, unsigned int size_of_array);

/**
 * @brief Find the mean of the given data set
 *
 * @param data_array data set to find mean
 * @param size_of_array number of elements in the data set
 *
 * @return the mean of the givem data set
 */
unsigned char find_mean(unsigned char* data_array, unsigned int size_of_array);

/**
 * @brief Find the maximum number from the given data set
 *
 * @param data_array data set to find maximum number
 * @param size_of_array number of elements in the data set
 *
 * @return the maximum number from of the givem data set
 */
unsigned char find_max(unsigned char* data_array, unsigned int size_of_array);

/**
 * @brief Find the minimum number from the given data set
 *
 * @param data_array data set to find minimum number
 * @param size_of_array number of elements in the data set
 *
 * @return the minimum number from of the givem data set
 */
unsigned char find_min(unsigned char* data_array, unsigned int size_of_array);

/**
 * @brief sort the given data set in ascending order
 *
 * @param data_array data set to be sorted
 * @param size_of_array number of elements in the data set
 */
void sort_array(unsigned char* data_array, unsigned int size_of_array);

/**
 * @brief Print the given data set on screen
 * 
 * @param data_array data set to be printed on screen
 * @param size_of_array number of elements in the data set
 */
void print_array(unsigned char* data_array, unsigned int size_of_array);

/**
 * @brief print the statistical values such as mean, median, maximum, minimum
 *
 * @param data_array data set on to perform the operation to find statistical values
 * @param size_of_array number of elements in the data set
 */
void print_statistics(unsigned char data_array[40], unsigned int size_of_array);

#endif /* __STATS_H__ */
