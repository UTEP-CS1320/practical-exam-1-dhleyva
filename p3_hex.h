/*
*   PRACTICAL EXAM #1 - Extra Credit Problem
*   Filename: p3_hex.h
*   The programmer must write code that prints out the decimal value
*   of a numerical character, as long as the character is
*   a valid Hexadecimal number
*   Last modified by: Angel F. Garcia (9/30/2020)
*/
#include <stdio.h>
#include <string.h>

void main_hex(void) {
  char hex_in[2];    
  // tried different ways, decided to try with string comparisons aswell
  // had to change char to a string
  int decimal_val = 0; //initiated an int value

  scanf("%s", hex_in);

  if (strcmp(hex_in, "0") == 0){ //used if-else statements with string comparison.
    decimal_val = 0; // gave values to int in each conditional
    printf("%d", decimal_val);  // print int value given
  }
  else if (strcmp(hex_in, "1") == 0){
    decimal_val = 1;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "2") == 0){
    decimal_val = 2;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "3") == 0){
    decimal_val = 3;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "4") == 0){
    decimal_val = 4;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "5") == 0){
    decimal_val = 5;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "6") == 0){
    decimal_val = 6;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "7") == 0){
    decimal_val = 7;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "8") == 0){
    decimal_val = 8;
    printf("%d", decimal_val);
  }
  else if (strcmp(hex_in, "9") == 0){
    decimal_val = 9;
    printf("%d", decimal_val);
  }
  else if ((strcmp(hex_in, "a") == 0) || (strcmp(hex_in, "A") == 0)){ // for the letters a-f, the if statement includes two comparisons to include both lower and upper case letters
    decimal_val = 10;
    printf("%d", decimal_val);
  }
  else if ((strcmp(hex_in, "b") == 0) || (strcmp(hex_in, "B") == 0)){
    decimal_val = 11;
    printf("%d", decimal_val);
  }
  else if ((strcmp(hex_in, "c") == 0) || (strcmp(hex_in, "C") == 0)){
    decimal_val = 12;
    printf("%d", decimal_val);
  }
  else if ((strcmp(hex_in, "d") == 0) || (strcmp(hex_in, "D") == 0)){
    decimal_val = 13;
    printf("%d", decimal_val);
  }
  else if ((strcmp(hex_in, "e") == 0) || (strcmp(hex_in, "E") == 0)){
    decimal_val = 14;
    printf("%d", decimal_val);
  }
  else if ((strcmp(hex_in, "f") == 0) || (strcmp(hex_in, "F") == 0)){
    decimal_val = 15;
    printf("%d", decimal_val);
  }
  else {
    printf("ERROR\n");
  }
  // I believe this could have been made in an easier, shorter way. However, I did many trial and error with different ways, and this one seemed to be the only one I could make work and was able to understand.  It is long, but very understandable and simple
}
