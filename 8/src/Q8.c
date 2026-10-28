#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	char id[10], title[50], author[30];
	int year;
} book;

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, i, op, j;
  scanf("%d", &n);
  book bk[n];
  float avg = 0;
  for(i = 0; i < n; i++){
  	getchar();
  	scanf("%[^\n]", bk[i].id);
  	getchar();
  	scanf("%[^\n]", bk[i].title);
  	getchar();
  	scanf("%[^\n]", bk[i].author);
  	scanf("%d", &bk[i].year);
  }
  scanf("%d", &op);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  switch(op){
  	case 1:
  		for(i = 0; i < n; i++){
  			printf("%s; %s; %s; %d\n", bk[i].id, bk[i].title, bk[i].author, bk[i].year);
		  }
		break;
	case 2:
		for(i = 0; i < n; i++){
			avg += bk[i].year;
  			printf("%s; %s; %s; %d\n", bk[i].id, bk[i].title, bk[i].author, bk[i].year);
		  }
		printf("Average year: %.2f", avg / n);
		break;
	case 3:
		for(i = 0; i < n - 1; i++){
			for(j = 0; j < n - i - 1; j++){
				if(bk[j].year < bk[j + 1].year){
					book temp = bk[j];
					bk[j] = bk[j + 1];
					bk[j + 1] = temp;
				}
			}
		}
		printf("%s; %s; %s; %d\n", bk[0].id, bk[0].title, bk[0].author, bk[0].year);
		break;
	default:
		printf("Invalid option!");
		
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
