#include <iostream>
using namespace std;

// Function to print the Sudoku board
void printBoard(int board[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if placing num at board[row][col] is safe
bool isSafe(int board[9][9], int row, int col, int num) {

    // Check row
    for (int j = 0; j < 9; j++) {
        if (board[row][j] == num) return false;
    }

    // Check column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == num) return false;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (board[i][j] == num)
                return false;
        }
    }

    return true;
}

// Sudoku Solver using Backtracking
bool solveSudoku(int board[9][9], int row, int col) {

    // If we reached the 9th row, Sudoku is solved
    if (row == 9) return true;

    // Move to next row if current col is last
    int nextRow = row;
    int nextCol = col + 1;
    if (col == 8) {
        nextRow = row + 1;
        nextCol = 0;
    }

    // If current cell already filled, move ahead
    if (board[row][col] != 0)
        return solveSudoku(board, nextRow, nextCol);

    // Try inserting digits 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;
            if (solveSudoku(board, nextRow, nextCol))
                return true;
            board[row][col] = 0;  // backtrack
        }
    }

    return false;
}

int main() {

    int board[9][9] = {
        {5,3,0, 0,7,0, 0,0,0},
        {6,0,0, 1,9,5, 0,0,0},
        {0,9,8, 0,0,0, 0,6,0},

        {8,0,0, 0,6,0, 0,0,3},
        {4,0,0, 8,0,3, 0,0,1},
        {7,0,0, 0,2,0, 0,0,6},

        {0,6,0, 0,0,0, 2,8,0},
        {0,0,0, 4,1,9, 0,0,5},
        {0,0,0, 0,8,0, 0,7,9}
    };

    if (solveSudoku(board, 0, 0))
        printBoard(board);
    else
        cout << "No solution exists";

    return 0;
}
