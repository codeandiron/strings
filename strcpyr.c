#include "strcpy.h"
#include "stdio.h"

/*Should copy a source string to the destination address. Uses recursion.*/
char* strcpy(char* destination, const char* source) {
	printf("\nThis is the strcpy method that uses recursion.");

	if ((*destination = *source) != '\0') {
		 strcpy(destination+1,source+1);
	}
	return destination;
}
