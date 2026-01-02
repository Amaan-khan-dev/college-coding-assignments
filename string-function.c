#include<stdio.h>
#include<string.h>

int main(){
	
	char str[50];
	
	printf("Enter a Text (String): ");
	scanf("%s", str);
	
	printf("Length of string: %d\n", strlen(str));
	
	printf("UpperCase String: %s\n", strupr(str));
	
	printf("LowerCase String: %s\n", strlwr(str));
	
	return 0;
}

