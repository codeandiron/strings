#include "strcpy.h"
#include "stdio.h"

/*Should copy a source string to the destination address. Uses a while loop.*/
char* strcpy(char* destination, const char* source) {
	printf("\nThis is the strcpy method that uses a while loop.");	
	int index = 0;
	
	while (source[index] != '\0') {
		destination[index] = source[index];
		index++;
	}
	destination[index] = '\0';
	
	return destination;
}
