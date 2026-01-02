#include<stdio.h>

int sum(int a, int b){
	return a+b;
}

int main(){
	
	int x, y, result;
	
	printf("Enter Two Number: ");
	scanf("%d %d",&x, &y);
	
	result = sum(x,y);
	
	printf("Sum = %d",result);
	
	return 0;
}
