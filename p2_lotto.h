/*
*   PRACTICAL EXAM #1 - Problem 2
*   Filename: p2_lotto.h
*   In this problem, the programmer has to write code that checks
*   if the user's ticket wins one of many prizes, or loses.
*   Last modified by: Angel F. Garcia (9/30/2020)
*/

#include <stdio.h>

void main_lotto(void) {
  char winner[5] = "7239";
  char ticket[5];

  scanf("%s", ticket);
  int i;                  //identify loop variable
  int total = 0;          //initiate a value for total equal characters between winner and ticket
  
  for (i = 0; i < 4; ++i){     //loop body conditions //will iretate 4 times (0,1,2,3)
    if (winner[i] == ticket[i]){    //compares each character one by one
      total++;    //moves to next character starts loop again
    }
  }
  if (total == 4){  //condition if all four numbers match
    printf("1st Prize!\n");
  }
  else if (total == 3){  //condition if three numbers match
    printf("2nd Prize!\n");
  }
  else if (total == 2){  //condition if two numbers match
    printf("3rd Prize!\n");
  }
  else {  //condition if one number one no numbers match
    printf("No Prize! Better luck next time!\n");
  }
}
