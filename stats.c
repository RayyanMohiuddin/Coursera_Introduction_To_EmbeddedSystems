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
 * @brief Main implementation C source file
 *
 * This is a C file that contains the definition all functions and their implementation
 *
 * @author Rayyan Mohiuddin
 * @date 23 July 2024
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

  /* Other Variable Declarations Go Here */
  unsigned int size = sizeof(test)/sizeof(test[0]);
  
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, size);
  print_array(test, size);
  sort_array(test, size);
  print_array(test, size);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char* array, unsigned int size) {
  unsigned char median, mean, maximum, minimum;

  median = find_median(array, size);
  mean = find_mean(array, size);
  maximum = find_maximum(array, size);
  minimum = find_minimum(array, size);
  
  printf("The statistics for the given array are: \n Median = %d \n Mean = %d \n Maximum = %d \n Minimum = %d \n", median, mean, maximum, minimum);
}

void print_array(unsigned char* array, unsigned int size) {
  printf("Printing array: \n");
  for(int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

unsigned char find_median(unsigned char* array, unsigned int size){
  unsigned char median;
  
  sort_array(array, size);
  
  if(size%2 == 0) {
    median = (array[size/2] + array[(size+1)/2])/2;
  }
  else {
    median = array[(size+1)/2];
  }
  
  return median;
}

unsigned char find_mean(unsigned char* array, unsigned int size){
  unsigned int sum = 0;
  unsigned char mean;
  
  for(int i = 0; i < size; i++) {
    sum += array[i];
  }
  
  mean = (unsigned char) (sum/size);
  return mean;
}

unsigned char find_maximum(unsigned char* array, unsigned int size){
  unsigned char maximum = 0;
  
  for(int i = 0; i < size; i++) {
    if(array[i] > maximum) {
      maximum = array[i];
    }
  }
  
  return maximum;
}

unsigned char find_minimum(unsigned char* array, unsigned int size){
  unsigned char minimum = 0xFF;
  
  for(int i = 0; i < size; i++) {
    if(array[i] < minimum) {
      minimum = array[i];
    }
  }
  
  return minimum;
}

unsigned char* sort_array(unsigned char* array, unsigned int size){

  unsigned char temp = 0;
  
  printf("Sorting array \n");
  
  for(int i = 0; i < size-1; i++) {
    for(int j = 0; j < size-i-1; j++) {
      if(array[j] < array[j+1]) {
        temp = array[j+1];
        array[j+1] = array[j];
        array[j] = temp;
      }
    }
  }
  
  return array;
}
