/*
*   PRACTICAL EXAM #1 - Problem 1
*   Filename: p1_lastd.h
*   The function in this file checks if 2 user inputs have the same last digit.
*   Last modified by: Angel F. Garcia (9/30/2020)
*/

#include <stdio.h>

void main_lastd(void) {
  int x, y;
  scanf("%d %d", &x, &y);

  int x_digit = x % 10; 
  int y_digit = y % 10;
  // The command _ % 10 gives us the last digit of a number (changed / with %)

  if(x_digit == y_digit) {
    printf("TRUE"); 
  }
  else {
    printf("FALSE");
  }
  // printf was mispelled, it was wissing the f
}
