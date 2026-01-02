#include<stdio.h>
int main(){
	
	int rows, cols, i, j;   // cols = coloumns.
	
	printf("Enter Number of Rows: ");
	scanf("%d",&rows);
	
	printf("Enter Number of Coloumns: ");
	scanf("%d",&cols);

	for(i = 1; i<=rows; i++){
		
		for(j=1; j<=cols; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}
