#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i, j;
  scanf("%d", &n);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for(i = 1; i < n ; i++){
  	printf(" ");
  }
  printf("*\n");
  
  
  for(i = 1; i <= n - 2; i++){
  	for(j = 0; j <= n - i - 2; j++ ){
  		printf(" ");
	  }
	printf("*");
	for(j = 1; j < i ; j++){
		printf(" ");
	}
	printf("*\n");
	
  }
  
  for(i = 0; i < n; i++){
  	printf("*");
  }
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
