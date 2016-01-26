// This program shows how much typing and repeating can be saved by using functions...
// Instead of typing out code to loop through and display the matrix every single time we want to
// We can just put the piece of code into a function that expects an array.
		

		/*	Book specified scalarMuliply as function name, however that caused the linker to fail, bc Multiply is likely 
			Defined somewhere in doumentation. Changed to scalarArray.	*/

#include <stdio.h>

int main (void)
{

	// Prototype Declarations
	void scalarArray(int matrix[3][5], int scalar);			// Loops through MulitiDimensional array and multiplies by scalar value
	void displayMatrix(int matrix[3][5]);						// Just prints out Multidimensional arrays with [3][5] length


	// Matrix Array Declaration.
	int sampleMatrix[3][5] =
	{
		{  7, 16, 55, 13, 12 },	// row 0
		{ 12, 10, 52,  0,  7 },	// row 1
		{ -2,  1,  2,  4,  9 }	// row 2
	};




	printf("Original matrix:\n");
	displayMatrix(sampleMatrix);


	scalarArray(sampleMatrix, 2);				// Multiplies all values in matrix by two
												// because arrays are pointer values, you don't return anything. Thevalues are just changed with function


	printf("\n\nMultiplied by 2 :\n");			// Now display changed array
	displayMatrix(sampleMatrix);				// Only expects one argument, the array itself.


	scalarArray(sampleMatrix, -1);			// Mulitplies all matrix vals by -1.

	printf("\nThen multiplied by -1 : \n");
	displayMatrix(sampleMatrix);



	return (0);

}







// ==================== Function to multiply a 3 x 5 array by a scalar ====================

void scalarArray(int matrix[3][5], int scalar)
{
	int row, column;

	for (row = 0; row < 3; row++ )				// Runs through all rows
	{
		for (column = 0; column < 5; column++)	// Runs through all columns
			matrix[row][column] *= scalar;		// This does the multiplying

	}
}




// ==================== Function to printf a 3 x 5 array ==================================

void displayMatrix(int matrix[3][5])	// only argument is array[3][5]
{
	int row, column;

	for (row = 0; row < 3; row++)
	{
		for (column = 0; column < 5; column++)
			printf("%5i", matrix[row][column]);

		printf("\n");	// printfs newline after column is done printing.
	}
	printf("\n");		// newline at end of function.
}







