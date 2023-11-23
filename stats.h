/******************************************************************************
 * Copyright (C) 2023 by Bhavesh Mishra.
 *
 * Redistribution, modification or use of this software in source 
 * or binary forms is permitted as long as the files maintain this 
 * copyright. Users are permitted to modify this and use it to 
 * learn about the field of embedded software. 
 * Bhavesh Mishra is not liable for any misuse of this material. 
 *****************************************************************************/
/**
 * @file stats
 * @brief A simple application that performs statistical analytics
 * on a dataset.
 * @Description In this program, the `maximum`, `minimum`, `mean,
 * and `median` functions calculate the respective statistics      
 *`based on the unsigned char test array.  
 * The print_statistics function prints the calculated statistics 
 * and the sorted test array in a nicely formatted presentation.
 * @author Bhavesh Mishra
 * @date 20/11/23
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/** '#######################################################
 * @brief Find minimum value
 *
 * A function which finds the minimum value of a given array.
 * 
 *
 * @param unsigned char,int
 *
 *@return minimum value
 ###########################################################*/ 
unsigned char find_minimum(unsigned char test[], int size);

 /** '########################################################
 * @brief Find maximum value
 *
 * A function which finds the maximum value of a given array.
 * 
 *
 * @param unsigned char,int
 *
 *@return maximum value
 ###########################################################*/ 
unsigned char find_maximum(unsigned char test[], int size);

/** '########################################################
 * @brief Find mean value
 *
 * A function which finds the average (mean) value of a given array.
 * 
 *
 * @param unsigned char,int
 *
 *@return mean value
 ###########################################################*/ 
unsigned char find_mean(unsigned char test[], int size);

/** '#########################################################
 * @brief Find median value
 *
 * A function which finds the median value of the given array.
 * 
 *
 * @param unsigned char,int
 *
 *@return median value
 ###########################################################*/ 

unsigned char find_median(unsigned char test[], int size);


 /** '########################################################
 * @brief Reorganize given values
 *
 * A function which sorts / reorganizes given numbers from largest to smallest
 * 
 *
 * @param unsigned char,int
 *
 * @return sorted_array
 ###########################################################*/ 
unsigned char sort_array(unsigned char test[], int size);
/**#########################################################
 * @brief Prints statistic values
 *
 * A function that prints the statistics of an array including minimum, 
 * maximum, mean and median in a formatted way.
 *
 * @param unsigned char min <minimum value>
 * @param unsigned char max <maximum value>
 * @param unsigned char mean  <average value>
 * @param unsigned char median <median value>
 *
 * @return void <no return value>
 ##########################################################*/
void print_statistics(unsigned char test[], int size);

 /** '########################################################
 * @brief Print an array 
 *
 * A function which prints a given array in a readable formatted way
 * 
 *
 * @param unsigned char,int 
 * 
 *@return void <no return value>
 ###########################################################*/ 
void print_array(unsigned char test[], int size);


#endif /* __STATS_H__ */


