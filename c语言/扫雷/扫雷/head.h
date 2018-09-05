#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<memory.h>
#define ROW 10
#define COL 10
#define MINE 10
void init(char arr[ROW][COL], int row, int col);
void init_mine(int mine[ROW+2][COL+2], int row, int col);
void print(char arr[ROW][COL], int row, int col);
void arrange(int mine[ROW+2][COL+2], int row, int col);
int menu();