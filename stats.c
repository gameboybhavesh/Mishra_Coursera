/******************************************************************************
 * Copyright (C) 2023 by Bhavesh Mishra
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
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
