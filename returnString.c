//DATE:2023.09.20
//PURPOSE: Program that returns strings from functions (best option is dynamic memory allocation)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//function prototype declarations

char* sayHello();


int main() {

	char* myString = NULL;
	printf("\n%s", myString); //points to null
	myString = sayHello();
	printf("\n%s", myString); //points to Hello World
	//free the memory
	free(myString);
	printf("\n%s", myString); //points to trash
	myString = NULL;
	printf("\n%s", myString); //points to null
	return 0;
}


//function definitions
char* sayHello() {
	char* pMessage = NULL;
	pMessage = (char*)malloc(50 * sizeof(char)); //allocate 50 char

	//Allocation failure
	if (pMessage == NULL) {
		printf("DEBUG: Memory allocation failed");
	}

	strcpy(pMessage, "Hello World");
	return pMessage;
}