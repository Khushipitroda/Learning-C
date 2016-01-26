// This program shows how much typing and repeating can be saved by using functions...
// Instead of typing out code to loop through and display the matrix every single time we want to
// We can just put the piece of code into a function that expects an array.


		/*	Book specified scalarMuliply as function name, however that caused the linker to fail, bc Multiply is likely
			Defined somewhere in doumentation. Changed to scalarArray.	*/

#include <stdio.h>

int main (void)
{

	// Prototype Declarations
	void scalarArray(int nRows, int nCols, int matrix[nRows][nCols], int scalar);			// Takes four arguments.. array rows, array cols, then uses
	void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);						// the previously stated vars to define matrix with the correct
																							// lengths.

	// Matrix Array Declaration.
	int sampleMatrix[3][5] =
	{
		{  7, 16, 55, 13, 12 },	// row 0
		{ 12, 10, 52,  0,  7 },	// row 1
		{ -2,  1,  2,  4,  9 }	// row 2
	};




	printf("Original matrix:\n");
	displayMatrix(3, 5, sampleMatrix);				// So now we just have to add the extra two arguments, which allows us to change array lengths


	scalarArray(3, 5, sampleMatrix, 2);


	printf("\n\nMultiplied by 2 :\n");
	displayMatrix(3, 5, sampleMatrix);


	scalarArray(3, 5, sampleMatrix, -1);

	printf("\nThen multiplied by -1 :\n");
	displayMatrix(3, 5, sampleMatrix);



	return (0);

}







// ==================== Function to multiply a 3 x 5 array by a scalar ====================

void scalarArray(int nRows, int nCols,
					 int matrix[nRows][nCols], int scalar)
{
	int row, column;

	for (row = 0; row < nRows; row++ )				// Runs through all rows // Sets row length to correct arg.
	{
		for (column = 0; column < nCols; column++)	// Runs through all columns  // Sets column to appropriate length with arg.
			matrix[row][column] *= scalar;		// This does the multiplying

	}
}




// ==================== Function to printf a 3 x 5 array ==================================

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])	// only argument is array[3][5] // Added col and row for dynamic array-length
{
	int row, column;

	for (row = 0; row < nRows; row++)
	{
		for (column = 0; column < nCols; column++)
			printf("%5i", matrix[row][column]);

		printf("\n");	// printfs newline after column is done printing.
	}
	printf("\n");		// newline at end of function.
}





