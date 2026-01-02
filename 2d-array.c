#include<stdio.h>
int main(){
	
	int a[2][3] = { {1,2,3}, {4,5,6} };
	
	int i,j;
	
	printf("2-D Array elements: \n");
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("%d",a[i][j]);
		
		}
		
		printf("\n");
	}
	
		return 0;
}
