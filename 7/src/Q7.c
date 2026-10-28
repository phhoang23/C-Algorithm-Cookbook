#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	char id[10], fullName[50];
	float salary1, salary2, salary3, total;
} employees;



int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i;
  scanf("%d", &n);
  employees empl[n];
  for(i = 0; i < n; i++){
  	getchar();
	scanf("%[^\n]", empl[i].id);
	getchar();
	scanf("%[^\n]", empl[i].fullName);
	scanf("%f %f %f", &empl[i].salary1, &empl[i].salary2, &empl[i].salary3);
	empl[i].total = empl[i].salary1 + empl[i].salary2 + empl[i].salary3;
	}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i = 0; i < n; i++){
  	printf("%s; %s; %.2f => ",empl[i].id, empl[i].fullName, empl[i].total);
  	if(empl[i].total > 10000000){
  		printf("High\n");
	  }else{
	  	printf("Low\n");
	  }
  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
