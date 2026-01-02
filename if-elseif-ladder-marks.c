#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
	
	if(marks>=35 && marks<=100){
		printf("Pass");
	}
	else if(marks>100 || marks<0){
		printf("Enter Valid marks");
	}
	else{
		printf("Fail.");
	}
	return 0;
}
