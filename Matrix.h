#pragma once
#include <iostream>
#include <fstream>
using namespace std;

const int MATRIX_SIZE = 3;
const int row_size = 3;

void create(float m[][MATRIX_SIZE], int row_size);      //function prototype results: m exists and all its entries are 0 

void read_matrix(float m[][MATRIX_SIZE], int row_size, ifstream& inputFile);   //function prototype requires: the elements of the matrix are listed in row major order ,results: read a matrix from the input and store it in m

void write_matrix(const float m[][MATRIX_SIZE], int row_size);   //function prototype results: write the matrix m, one row per line, to the output with fixed point notation xxxx.yy

void multiply(float m1[][MATRIX_SIZE], float m2[][MATRIX_SIZE], float m[][MATRIX_SIZE], int row_size);  //function prototype results: m which is the multiplication result of matrices m1 and m2

