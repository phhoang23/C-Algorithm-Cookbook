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
  int a[n];
  for(i = 0; i < n; i++){
  	scanf("%d", &a[i]);
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  for(i = 0; i < n - 1; i++){
  	for(j = 0; j < n - 1 - i; j++){
  		if(a[j] < a[j + 1]){
  			int temp = a[j];
  			a[j] = a[j + 1];
  			a[j + 1] = temp;
		  }
	  }
  }
  for(i = 0; i < n; i++){
  	if(a[i] % 2 != 0){
  		printf("%d ", a[i]);
	  }
  }
  
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
