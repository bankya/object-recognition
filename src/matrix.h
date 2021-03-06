#include <vector>
#include <iostream>
#include <math.h>
#include <stdio.h>

typedef std::vector< std::vector<double> > tbt; // Two dimensional matrix

class Matrix {
	public:
		unsigned numRows;
		unsigned numCols;
		tbt data;
		
		// Constructors
		Matrix();
		Matrix(unsigned rowIdx, unsigned colIdx, unsigned numRows, unsigned numCols);
		Matrix(tbt values, unsigned numRows_, unsigned numCols_);
		Matrix(double value, unsigned numRows_, unsigned numCols_);

		// Methods
		Matrix multiply(Matrix b);
		Matrix elementMultiply(Matrix b);
		Matrix transpose();
		Matrix addOnesRow();
		Matrix addOnesCol();

		void removeRow(unsigned row);
		void removeCol(unsigned col);

		Matrix getRow(unsigned row);
		Matrix getCol(unsigned col);
		Matrix compare(Matrix b);

		double sum();
		double toFloat();
		void print();
		
		// Operators
		Matrix& operator+=(const Matrix& rhs);
		Matrix& operator-=(const Matrix& rhs);
		Matrix& operator*=(const Matrix& rhs);
		Matrix& operator=(Matrix rhs);
};

Matrix operator+(Matrix lhs, const Matrix& rhs);
Matrix operator-(Matrix lhs, const Matrix& rhs);
Matrix operator*(Matrix lhs, const Matrix& rhs);
