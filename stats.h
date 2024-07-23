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
 * @brief C Header file 
 *
 * This is a C header file used to declare all functions used in stats.c
 *
 * @author Rayyan Mohiuddin
 * @date 23 July 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics for a given array
 *
 * This function prints the statistics for a given array including median, mean, maximum and minimum.
 *
 * @param array 8-bit pointer to the array
 *
 * @return void function
 */
 
 void print_statistics(unsigned char* array);
 
/**
 * @brief Prints an array
 *
 * This function prints the numbers in a given array.
 *
 * @param array 8-bit pointer to the array
 * @param size 32-bit word defining the size of the array
 *
 * @return void function
 */
 
 void print_array(unsigned char* array, unsigned int size);
 
/**
 * @brief Returns median of a given array
 *
 * This function calculates and returns the median of a given array.
 *
 * @param array 8-bit pointer to the array
 * @param size 32-bit word defining the size of the array
 *
 * @return Returns an 8-bit median value
 */
 
 char find_median(unsigned char* array, unsigned int size);
 
/**
 * @brief Returns mean of a given array
 *
 * This function calculates and returns the mean of a given array.
 *
 * @param array 8-bit pointer to the array
 * @param size 32-bit word defining the size of the array
 *
 * @return Returns an 8-bit mean value
 */
 
 char find_mean(unsigned char* array, unsigned int size);
 
/**
 * @brief Returns maximum value in a given array
 *
 * This function finds and returns the maximum value in a given array.
 *
 * @param array 8-bit pointer to the array
 * @param size 32-bit word defining the size of the array
 *
 * @return Returns an 8-bit maximum value
 */
 
 char find_maximum(unsigned char* array, unsigned int size);
 
/**
 * @brief Returns minimum value in a given array
 *
 * This function finds and returns the minimum value in a given array.
 *
 * @param array 8-bit pointer to the array
 * @param size 32-bit word defining the size of the array
 *
 * @return Returns an 8-bit minimum value
 */
 
 char find_minimum(unsigned char* array, unsigned int size);
 
 /**
 * @brief Sorts a given array
 *
 * This function sorts a given array from largest to smallest values.
 *
 * @param array 8-bit pointer to the array
 * @param size 32-bit word defining the size of the array
 *
 * @return returns an 8-bit pointer to the sorted array
 */
 
 unsigned char* sort_array(unsigned char* array, unsigned int size);


#endif /* __STATS_H__ */
