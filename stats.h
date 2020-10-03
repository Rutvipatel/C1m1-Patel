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
 * @file <stats.h> 
 * @brief <This includes function declaration of function used for doing statistical analysis on a given   array >
 *
 * @author <Rutvi Patel>
 * @date <3rd October,2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Function Declarations of printing an array*/ 
void print_array(unsigned char *array, unsigned char size);
/**
 * @brief <this function prints all the elements of an array>
 * @param <unsigned char *array> <this input receives the address of the array we want to print>
 * @param <unsigned *size> <this input receives the number of elements in the array we want to print>
 * @return <This a void function so it doestnot return and value as it only prints>
 */
/* Function Declarations of finding the maximum value from the given values in a array*/ 
int find_maximum(unsigned char *array, unsigned char size);
/**
 * @brief <this function finds the maximum value from all the elements of an array>
 * @param <unsigned char *array> <this input receives the address of the array we want to the find the  maximum value>
 * @param <unsigned *size> <this input receives the number of elements in the array>
 * @return <This a int function so it returns the maximum value which is an integer value>
 */
 int find_minimum(unsigned char *array, unsigned char size);
/**
 * @brief <this function finds the minimum value from all the elements of an array>
 * @param <unsigned char *array> <this input receives the address of the array we want to the find the  minimum value>
 * @param <unsigned *size> <this input receives the number of elements in the array>
 * @return <This a int function so it returns the minimum value which is an integer value>
 */
 float find_median(unsigned char *array, unsigned char size);
/**
 * @brief <this function finds the medain from all the elements of an array>
 * @param <unsigned char *array> <this input receives the address of the array we want to the find the medain of>
 * @param <unsigned *size> <this input receives the number of elements in the array>
 * @return <This a float function so it returns the median which value can be an intege or a floating point value>
 */
 float find_mean(unsigned char *array, unsigned char size);
/**
 * @brief <this function finds the mean of all the elements of an array>
 * @param <unsigned char *array> <this input receives the address of the array we want to the find the mean of>
 * @param <unsigned *size> <this input receives the number of elements in the array>
 * @return <This a float function so it returns the mean of the array which value can be an intege or a floating point value>
 */
void sort_array(unsigned char *array, unsigned char size);
/**
 * @brief <this function sorts the array from largest to smallest value which means that zeroth element of array is largest and last element is smallest >
 * @param <unsigned char *array> <this input receives the address of the array we want to sort in descending order>
 * @param <unsigned *size> <this input receives the number of elements in the array>
 * @return <This a void function as it just sorts the given array and re-pritnts in that order>
 */
 void print_statistics(void);
/**
 * @brief <this function only prints the the value that were found using above functions of maximum, minimum, mean and median >
 * @return <This a void function as it just prints the statistical data>
 */

#endif /* __STATS_H__ */
