#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define easy 10
void initBoard(char board[ROWS][COLS], int rows, int cols,char set);
void displayBoard(char board[ROWS][COLS], int row, int col);
void setMine(char board[ROWS][COLS], int row, int col);
void findMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int getcount(char mine[ROWS][COLS], int x, int y);
void spread(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y,int row,int col);