
// Author : Akshata Bhat
// USC ID : 9560895350
// Email : akshatab@usc.edu
// Submission Date :  3/25/2018

#ifndef HW3_PROB2A_MY_HEADER_FILE_H
#define HW3_PROB2A_MY_HEADER_FILE_H

#endif //HW3_PROB2A_MY_HEADER_FILE_H


#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

float** create_2Darray(float** array, int width, int height);
int** create_2Darray(int** array, int width, int height);
unsigned char** create_2Darray(unsigned char** array, int width, int height);
unsigned char* convert_2Dto1D(unsigned char** input2D, int width, int height);
unsigned char** convert_1Dto2D(unsigned char* input1D, int width, int height);
int** convert_1Dto2D(int* input1D, int width, int height);
int* convert_2Dto1D(int** input2D, int width, int height);
void write_1Darray_to_file(unsigned char* array, int width, int height, char filename[]);
unsigned char* read_1Darray_from_file(int width, int height, char filename[]);
unsigned char max_val(unsigned char, unsigned char, unsigned char);
unsigned char min_val(unsigned char, unsigned char, unsigned char);
int mostFrequentValue(int a[], int length);
int min_val_index(float intensity, float b[]);
int mostFrequentValue(int a[], int length);
int closest_value(int intensity, int b[], int levels);
int* insertion_sort_increasing(int* list,int length);
int* sort_decreasing(int* list,int length);
unsigned char* convert_int_to_char_1D(int* inputArray, int width, int height);


