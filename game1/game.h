#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3//���峣��ROW=3
#define COL 3//���峣��COL=3

void initBoard(char board[ROW][COL], int row, int col);
void displayBoard(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL], int row, int col);
void computerMove(char board[ROW][COL],int row,int col);
char isWin(char board[ROW][COL], int row, int col);
