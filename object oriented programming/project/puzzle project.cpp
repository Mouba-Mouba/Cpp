/*
Mohamed Moubarak Mohamed Misbahou Mkouboi 1820705
Jacques Delamou 1820045
Muhammad Naim Imran Bin Mohd Nizar 1917173

group 8

section 1

*/
#include <iostream>
#include <fstream>
#define UNASSIGNED 0  // UNASSIGNED is used for empty cells in sudoku grid
using namespace std;


void readFile(int sudokuBoard[16][16]);// this fonction is to read if there is a file or not
//line 43 to 58
void displayOptions();// display fonction that different output from line 96 to 105

void display(int sudokuBoard[16][16]);//the design  and the display function of the board from line 62 to 90
void getOption(int sudokuBoard[16][16]);// the option to choose the kind of display line 109 to 128
void compAnswer(int sudokuBoard [16][16]);


bool SolveSudoku(int sudokuBoard[16][16]);
bool FindUnassignedLocation(int sudokuBoard[16][16], int &row, int &col);  // This function finds an entry in grid that is still unassigned
bool isSafe(int sudokuBoard[16][16], int row, int col, int num);   // Checks whether it will be legal to assign num to the given row, col
void answerCheck (int sudokuBoard [16][16])// this fonction is to check and display congrat or fail depend on the result(option B)
{// line
	int row, col,num;
	if (isSafe (sudokuBoard,row,col,num)== true){

	cout << "                                                             " <<endl;
    cout << "      +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " <<endl;
    cout << "      ++++                                                   ++++ " <<endl;
    cout << "      ++++           GOOD ANSWER, CONGRATULATION!            ++++ " <<endl;
    cout << "      ++++                                                   ++++ " <<endl;
    cout << "      +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " <<endl;
}

	else if (isSafe (sudokuBoard,row,col,num) == false){

	cout << "                                                             " <<endl;
    cout << " ############################################################" <<endl;
    cout << " #####                                                  #####" <<endl;
    cout << " #####              PLEASE  RETRY!                      #####" <<endl;
    cout << " #####                                                  #####" <<endl;
    cout << " ############################################################" <<endl;

}
}


int main()
{
   int sudokuBoard[16][16] = {}; // initialize every element
	cout << "                                                             " <<endl;
    cout << "      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ " <<endl;
    cout << "      @@@@                                                   @@@@ " <<endl;
    cout << "      @@@@    GROUP VIII PROGRAMMING PROJECT PRESENTATION    @@@@ " <<endl;
    cout << "      @@@@                                                   @@@@ " <<endl;
    cout << "      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ " <<endl;

	cout << "                                                                  " <<endl;
    cout << "      =========================================================== " <<endl;
    cout << "      ====                                                   ==== " <<endl;
    cout << "      ==== JUST TO REMAIND YOU THAT THE INPUT IS FROM A FILE ==== " <<endl;
    cout << "      ==== PLEASE FILL IT BY REFERING THE SCHEMA IN OPTION'D'==== " <<endl;
     cout <<"      ====                                                   ==== " <<endl;
    cout << "      =========================================================== " <<endl;


   displayOptions();
   getOption(sudokuBoard);
   return 0;
}

/**********************************************************************
 * reads the file back into our board[][] array.
 ***********************************************************************/
void readFile(int sudokuBoard[16][16])
{
   ifstream inFile;

   inFile.open("jack.txt");
   if (!inFile)
      cout << "Error reading file";

   for (int row = 0; row < 16; row++)
   {
      for (int col = 0; col < 16; col++)
         inFile >> sudokuBoard[row][col];

   }
	inFile.close();
}
/**********************************************************************
 * displays the suduko board and replaces zeros with null characters.
 ***********************************************************************/
void display(int sudokuBoard[16][16])
{
	 char option;


    // <-- warning: unused variable
   // display sudoku board row by row
   cout << endl;

      for (int row = 0; row < 16; row++)
      {
    cout<<" ";
         for (int col = 0; col < 16; col++)
         {
            if (sudokuBoard[row][col] == 0)
               cout << "   ";
            else
               cout << sudokuBoard[row][col];
            if (col == 3 || col == 7||col==11)
               cout << "|||";
            else if (col !=15)
               cout << " ";
         }

         if (row == 3 || row == 7||row==11)
            cout << "\n  -------------------------------------------------------------------\n";
         else
            cout << endl;
      }


   cout<<endl;// line 109 to 130

}

/**********************************************************************
 * function displays the options the gamer can choose from.
 ***********************************************************************/
void displayOptions()
{

	cout <<"                                                                   " <<endl;
   cout << "                                                                   " <<endl;
   cout << "         ********************************************************  " <<endl;
   cout << "         ****         THANKS FOR CHOOSING YOUR OPTION        ****  " <<endl;
   cout << "         ********************************************************  " <<endl;
   cout << "                                                                   " <<endl;
   cout << "                                                                     " <<endl;
   cout << "        &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&  " <<endl;
   cout << "        &&&                                                     &&&  " <<endl;
   cout << "        &&&==> Enter 'A' to show you differents option you have &&& " <<endl;
   cout << "        &&&===> Enter 'D' to Display the board                  &&& "<<endl;
   cout << "        &&&====> Enter 'B' to  Check Answer                     &&& "<<endl;
   cout << "        &&&=====> Enter 'L' to show the Program Answer          &&& "<<endl;
   cout << "        &&&                                                     &&& " <<endl;
   cout << "        &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& " <<endl;
   cout << "                                                                    " <<endl;
}

/**********************************************************************
 * This function will proceed to go to the option they choose.
 ***********************************************************************/
void getOption(int sudokuBoard[16][16])// it is called in display fonction in line 89
{
   char option;
   cout << "                 THANKS TO ENTER YOUR CHOOSEN OPTION : ";
   cin >> option;

   if (option == 'A')

   displayOptions();// line 96 to 105 the display board fonction

   else if (option == 'D')
      display(sudokuBoard);//line 62 to 90 to display the squelet of the board



    else if (option == 'B')
    	answerCheck (sudokuBoard);// check whether the answer is right or wrong and display congrat or fail(line 18 to 25)

    else if (option == 'L')
    	compAnswer(sudokuBoard);

   cout<<endl;
}

/**********************************************************************
  * For computer generates
 ***********************************************************************/

bool SolveSudoku(int sudokuBoard[16][16])  /* Takes a partially filled-in grid and attempts to assign values to all unassigned locations in
such a way to meet the requirements for Sudoku solution (non-duplication across rows, columns, and boxes) */
{
    int row, col;

    // If there is no unassigned location,
    // we are done
    if (!FindUnassignedLocation(sudokuBoard, row, col))
    return true; // success!

    // consider digits 1 to 16
    for (int num = 1; num <= 16; num++)
    {
        // if looks promising
        if (isSafe(sudokuBoard, row, col, num))
        {
            // make tentative assignment
            sudokuBoard[row][col] = num;

            // return, if success, yay!
            if (SolveSudoku(sudokuBoard))
                return true;

            // failure, unmake & try again
            sudokuBoard[row][col] = UNASSIGNED;
        }
    }
    return false; // this triggers backtracking
}

/* Searches the grid to find an entry that is
still unassigned. If found, the reference
parameters row, col will be set the location
that is unassigned, and true is returned.
If no unassigned entries remain, false is returned. */
bool FindUnassignedLocation(int sudokuBoard[16][16],
                            int &row, int &col)
{
    for (row = 0; row < 16; row++)
        for (col = 0; col < 16; col++)
            if (sudokuBoard[row][col] == UNASSIGNED)
                return true;
    return false;
}

/* Returns a boolean which indicates whether
an assigned entry in the specified row matches
the given number. */
bool UsedInRow(int sudokuBoard[16][16], int row, int num)
{
    for (int col = 0; col < 16; col++)
        if (sudokuBoard[row][col] == num)
            return true;
    return false;
}

/* Returns a boolean which indicates whether
an assigned entry in the specified column
matches the given number. */
bool UsedInCol(int sudokuBoard[16][16], int col, int num)
{
    for (int row = 0; row < 16; row++)
        if (sudokuBoard[row][col] == num)
            return true;
    return false;
}

/* Returns a boolean which indicates whether
an assigned entry within the specified 4x4 box
matches the given number. */
bool UsedInBox(int sudokuBoard[16][16], int boxStartRow,
               int boxStartCol, int num)
{
    for (int row = 0; row < 4; row++)
        for (int col = 0; col < 4; col++)
            if (sudokuBoard[row + boxStartRow]
                    [col + boxStartCol] == num)
                return true;
    return false;
}

/* Returns a boolean which indicates whether
it will be legal to assign num to the given
row, col location. */
bool isSafe(int sudokuBoard[16][16], int row, int col, int num)
{
    if (!UsedInRow(sudokuBoard, row, num) &&  !UsedInCol(sudokuBoard, col, num) &&
        !UsedInBox(sudokuBoard, row - row % 4 ,  col - col % 4, num) &&
		sudokuBoard[row][col] == UNASSIGNED )
    	return true;
	else
		return false;
}

void compAnswer(int sudokuBoard [16][16] )//fonction to see wether the solution is right or not
{
	readFile(sudokuBoard);
    if (SolveSudoku(sudokuBoard) == true) {

        display(sudokuBoard);
    }
    else{

    cout << "                                                             " <<endl;
    cout << " +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " <<endl;
    cout << " ++++                                                   ++++" <<endl;
    cout << " ++++                CANNOT  DISPLAY                    ++++ " <<endl;
    cout << " ++++                                                   ++++ " <<endl;
    cout << " +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " <<endl;
}
}
  //this code is contributed by rathbhupendra
