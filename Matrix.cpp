#include <iostream>
#include <fstream>
#include <iomanip>
#include "Matrix.h"

using namespace std;


void create(float m[][MATRIX_SIZE], int row_size)           // Create matrix function.
{

	for (int i = 0; i < row_size; i++)                      // create matrix with for loop. rows first
		for (int j = 0; j < MATRIX_SIZE; j++)                // nested for loop to create matrix in row major order such as m00, m01, m02
			m[i][j] = 0;                                    // to make all entries are 0 
}


void write_matrix(const float m[][MATRIX_SIZE], int row_size)                       //write matrix function
{

	for (int i = 0; i < row_size; i++) {                                            //nested for loop to write array elements as a matrix
		cout << "\n";                                                               //newline for matrix look
		for (int j = 0; j < MATRIX_SIZE; j++)                                        //m00, m01 and m02 order 
			cout << setprecision(4) << fixed << setw(8) << "\t" << m[i][j];         //output with fixed point notation
	}
}


void read_matrix(float m[][MATRIX_SIZE], int row_size, ifstream& inputFile)              //read matrix function from file
{

	for (int i = 0; i < row_size; i++)                                                    //nested loop to read matrix elements in row major order
		for (int j = 0; j < MATRIX_SIZE; j++)                                              // 
			inputFile >> m[i][j];                                                         // reads each array element from file and stores in memory
}


void multiply(float m1[][MATRIX_SIZE], float m2[][MATRIX_SIZE], float m[][MATRIX_SIZE], int row_size)    //matrix multiplication function
{

	for (int i = 0; i < row_size; i++)                                                                   //nested for loop for multiplication
	{
		for (int j = 0; j < MATRIX_SIZE; j++)                                                             //first make sure multiplication elements are equal to 0 in the beginning
		{
			m[i][j] = 0;

			for (int k = 0; k < MATRIX_SIZE; k++)                                                         // perform matrix multiplication
				m[i][j] += m1[i][k] * m2[k][j];

		}
	}
}


