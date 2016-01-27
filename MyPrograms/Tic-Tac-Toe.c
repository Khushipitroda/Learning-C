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
	if (gAns == 2)
	{
		printf("\n\n\n==== Two Player Game! ====\n");

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
	printf("\n--------------------------------------------------\n");
	printf("Welcome to Tic-Tac-Toe!\n\n");
	printf("1). Please type 1 to begin SOLO game!\n");
	printf("2). Type 2 if you want to play a two-player game!\n");
	printf("3). Type 3 to exit game.\n");
	printf("\n--------------------------------------------------\n\n\n");
	scanf("%i", &gAns);

}



void displayBoard(void)
{
	printf("\n             ------- Columns -------\n\n");
    int i, j;
	for (i = 0; i < 3; i++)
    {
    	printf(" Row-%i: ", i);
		for (j = 0; j < 3; j++)
			printf("%8i", gBoard[i][j]);

    printf("\n");
    }
    printf("\n\n");
}


void playerInput(void)
{

	void displayBoard(void);
	void player1Decision(void);
	void pickRow(void);
	void pickColumn(void);
	void checkForWinner(void);


		pickRow();

		pickColumn();

		player1Decision();

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
void player1Decision(void)
{
	gBoard[nRow][nCol] = gPlayer1;		// sets to 1.
}
void player2Decision(void)
{
	gBoard[nRow][nCol] = gPlayer2;		// sets to 1.
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
