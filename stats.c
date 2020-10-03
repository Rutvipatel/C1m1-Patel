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
 * @file <stats.c> 
 * @brief < This files implements all the function declared in the header file. It performs the statistical analysis on the given string and gives the report on the mean, median, maximum and minimum value of the array test>

 *
 * @author <Rutvi Patel>
 * @date <3rd October, 2020>
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

  /* Other Variable Declarations find functions are here*/
  int maximum_value = find_maximum(test,SIZE);
  int minimum_value = find_minimum(test,SIZE);
  float median_of_array = find_median(test,SIZE);
  float mean_of_array = find_mean(test,SIZE);
  /* Statistics and Printing Functions*/
  print_array(test,SIZE);
  sort_array(test,SIZE);
  print_statistics();
  

}

/*All the function declared in header file are implemented here*/
void print_array(unsigned char *array, unsigned char size)
{
    int i;
    printf("the given test array is:\n");
    printf("[ ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("]\n");
}

int find_maximum(unsigned char *array, unsigned char size)
{
    int max = *array;
    for (int i = 1; i < size; i++)
    {
        array++;
    if (*array > max)
        {
            max = *array;
        }
    }
    return max;
}
int find_minimum(unsigned char *array, unsigned char size)
{
    int min = *array;
    for (int i = 1; i < size; i++)
    {
        array++;
    if (*array < min)
        {
            min = *array;
        }
    }
    return min;
}
float find_median(unsigned char *array, unsigned char size)
{
    int x = size / 2;
    float y = (*(array+x-1) + *(array+x));
    float median = y/2;
    return median;
}
float find_mean(unsigned char *array, unsigned char size)
{
    float total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + *(array + i);
    }
    float mean = total/size ;
    return mean;
}
void sort_array(unsigned char *array, unsigned char size)
{
    int i;
    int j;
    int k;
    for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if ( *(array+i) < *(array+j))
            {
                k = *(array+i);
                *(array + i) = *(array + j);
                *(array + j) = k;
            }
        }
    }
    printf("the sorted test array in descending order:\n"); 
    printf("[ ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("]\n");
}
void print_statistics(void)
{
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                
    int maximum = find_maximum(test, SIZE);
    int minimum = find_minimum(test, SIZE);
    float median = find_median(test, SIZE);
    float mean = find_mean(test, SIZE);
    printf("maximum_value = %d \n minimum_valu = %d \n median of array = %f \n mean of array = %f", maximum,minimum, median, mean);
}

