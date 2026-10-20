#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int x;
	int y;
} point;


int main() {
	point* mypoint;
	mypoint = (point*)malloc(sizeof(point)); // Allocate memory for a point structure
	mypoint->x = 10; // Assign values to the structure members
	mypoint->y = 5;
	printf("Point coordinates: (%d, %d)\n", mypoint->x, mypoint->y); // Print the point coordinates
	free(mypoint); // Free the allocated memory
}