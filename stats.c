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
 * @brief This is the part of the assignment for Introduction to Embedded System 
 * course. The functions in this file analyze an array and calculates mean, median, 
 * maximum and minimum number. It also sorts the array in ascending order and prints
 * it.
 * @author Rutvi Patel
 * @date 07/12/2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] =  { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,sizeof(test));
  printf("Array beforing sorting\n");
  print_array(test,sizeof(test));
  sort_array(test,sizeof(test));
  printf("Array after sorting\n");
  print_array(test,sizeof(test));

}

/* Add other Implementation File Code Here */
unsigned char find_median(unsigned char* data_array, unsigned int size_of_array){
  unsigned char median;
  unsigned char sorted_array[SIZE];
  unsigned char temp;

  for(int index = 0; index < size_of_array; index++)
  {
      sorted_array[index] = data_array[index+1];
  }

  for(int step = 0; step<size_of_array-1; step++){
    for(int index = 0; index < size_of_array-step-1; index++){
      if(sorted_array[index]>sorted_array[index+1]){
      temp = sorted_array[index];
      sorted_array[index] = sorted_array[index+1];
      sorted_array[index+1] = temp;
    }
  }
  }
  if(size_of_array % 2 == 0){
    median = ((sorted_array[size_of_array / 2  - 1]) + (sorted_array[(size_of_array / 2)])) / 2;
  }
  else{
    median =  sorted_array [size_of_array / 2];
  }
  return median;
}

unsigned char find_mean(unsigned char* data_array, unsigned int size_of_array){
  unsigned  char mean;
  unsigned int sum = 0;
  int index;
  	
  for(index = 0; index < size_of_array; index++){
    sum = sum + data_array[index];
  }

  mean = (sum / size_of_array);
  return mean;
}

unsigned char find_max(unsigned char* data_array, unsigned int size_of_array){
  unsigned char max;
  int index;
  max = 0;
  for(index = 0; index < size_of_array; index++){
    if(max < data_array[index]){
      max = data_array[index];
    }
  }
  return max;
}

unsigned char find_min(unsigned char* data_array, unsigned int size_of_array){
  unsigned char min;
  int index;
  min = data_array[0];
  for(index = 0; index < size_of_array; index++){
    if(min > data_array[index]){
      min = data_array[index];
    }
  }
  return min;
}

void sort_array(unsigned char* data_array, unsigned int size_of_array){
  unsigned char temp;
  for(int step = 0; step<size_of_array-1; step++){
    for(int index = 0; index < size_of_array-step-1; index++){
      if(data_array[index]<data_array[index+1]){
      temp = data_array[index];
      data_array[index] = data_array[index+1];
      data_array[index+1] = temp;
    }
  }
  }
}

void print_array(unsigned char* data_array, unsigned int size_of_array){
  for(int index = 0; index < size_of_array; index++){
    printf("%d ",data_array[index]);
  }
  printf("\n");
}

void print_statistics(unsigned char *data_array, unsigned int size_of_array){
  unsigned char median;
  unsigned char mean;
  unsigned char maximum;
  unsigned char minimum;
  
  median = find_median(data_array, size_of_array);
  mean = find_mean(data_array, size_of_array);
  maximum = find_max(data_array, size_of_array);
  minimum = find_min(data_array, size_of_array);
  
  printf("median  = %d\n",median);
  printf("mean    = %d\n",mean);
  printf("maximum = %d\n",maximum);
  printf("minimum = %d\n",minimum);
  printf("---------------------------\n");
}
