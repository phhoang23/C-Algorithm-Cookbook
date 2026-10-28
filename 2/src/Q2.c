#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  float delta = (b * b) - (4 * a * c);
  if(delta > 0){
  	float x1 = (sqrt(delta) - b) / (2 * a), x2 = ( (-1 * sqrt(delta)) - b) / (2 * a);
  	printf("%.2f\n%.2f", x1, x2);
  }else if(delta == 0){
  	float x1 = (sqrt(delta) - b) / (2 * a);
  	printf("%.2f", x1);
  }else{
  	printf("No real roots");
  }
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
