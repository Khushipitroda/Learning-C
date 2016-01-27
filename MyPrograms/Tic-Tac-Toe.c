#include <stdio.h>



	/******* Global Variables ******/
	int gBoard[3][3] = {
			{ 0, 0, 0 },
			{ 0, 0, 0 },
			{ 0, 0, 0 }

		};

	int gPlayer1 = 1, gPlayer2 = 2, gNone = 0;

	int nRow, nCol;

	int gAns;

	int gGameFinished = 0;

	/******************************/



int main (void)
{





	// Prototype declarations
	void welcomePlayer(void);
	void playerInput(void);
	void displayBoard(void);
	// Prototype declarations





	welcomePlayer();

	if (gAns == 1)
	{
		printf("\n\nSweet! You get the first move!\n");
		displayBoard();
		playerInput();
	}

	do {
	printf("\n\nAlright! it's your move again!\n");
	playerInput();

	} while (gGameFinished != 1);










	printf("\n\n\n");


	return (0);

}



void welcomePlayer(void)
{
	printf("Welcome to Tic-Tac-Toe!\n");
	printf("Please type 1 to begin game!  ");
	scanf("%i", &gAns);

}



void displayBoard(void)
{
    int i, j;
	for (i = 0; i < 3; i++)
    {
		for (j = 0; j < 3; j++)
			printf("%5i", gBoard[i][j]);

    printf("\n");
    }

}


void playerInput(void)
{

	void displayBoard(void);
	void playerDecision(void);
	void pickRow(void);
	void pickColumn(void);
	void checkForWinner(void);


		pickRow();

		pickColumn();

		playerDecision();

		printf("You made your move!\n\n");

		displayBoard();

		checkForWinner();

}
void pickRow(void)
{
	printf("Enter the row you want to play  : ");
	scanf("%i", &nRow);
}
void pickColumn(void)
{
	printf("You picked row %i.\n", nRow);
	printf("Now enter the Column you want to play  : ");
	scanf("%i", &nCol);
}
void playerDecision(void)
{
	gBoard[nRow][nCol] = gPlayer1;		// sets to 1.
}
void checkForWinner(void)
{

	int ctr = 0;
	void checkCtr(int ctr);
	void checkRows(void);
	void checkCols(void);
	void checkDiagonals(void);

	checkRows();
	checkCols();
	checkDiagonals();

}




// Algorythm checks if a row in gBoard contains all 1's
void checkRows(void)
{

	int ctr;
	int i, j;

	void checkCtr(int ctr);

	for (i = 0; i < 3; i++)
	{
		ctr = 0;
		for (j = 0; j < 3; j++)
			if (gBoard[i][j] == 1)
				ctr++;

		checkCtr(ctr);
	}
}






// Algorythm checks if a column in gBoard contains all 1's
void checkCols(void)
{

	int ctr;
	int i, j;

	void checkCtr(int ctr);

	for (i = 0; i < 3; i++)
	{
		ctr = 0;
		for (j = 0; j < 3; j++)
			if (gBoard[j][i] == 1)
				ctr++;


		checkCtr(ctr);
	}
}






void checkDiagonals(void)
{


	int ctr;
	int i, j;

	void checkCtr(int ctr);


	// Algorythm checks for diagonal win
	ctr = 0;
	if (gBoard[1][1] == 1)
	{
		ctr ++;

		if (gBoard[2][2] == 1)
			ctr++;
		if (gBoard[0][0] == 1)
			ctr++;

	}
    checkCtr(ctr);



    // Diagonal the other way..
	ctr = 0;
	if (gBoard[1][1] == 1)
	{
		ctr++;
		if (gBoard[0][2] == 1)
			ctr++;
		if (gBoard[2][0] == 1)
			ctr++;
	}
    checkCtr(ctr);
}






void checkCtr(int ctr)
{
	if (ctr == 3)
	{
		gGameFinished = 1;
	}

}
