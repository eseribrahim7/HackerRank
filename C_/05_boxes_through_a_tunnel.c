#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    int volume = b.length * b.width * b.height;
    return volume;
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    // Function to check if the height of a box is lower than MAX_HEIGHT
    return b.height < MAX_HEIGHT ? 1 : 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
    
    // Free the dynamically allocated memory
    free(boxes);
	return 0;
}



//CHATGPT COMMENT
/*
This C program defines a structure `box`, which represents a box with three fields: `length`, `width`, and `height`. It also defines two functions:

1. `get_volume`: This function takes a `box` as input and returns the volume of the box calculated by multiplying its `length`, `width`, and `height`.
2. `is_lower_than_max_height`: This function takes a `box` as input and checks if the box's `height` is lower than a predefined maximum height (`MAX_HEIGHT`). It returns `1` if the height is lower than `MAX_HEIGHT`, otherwise, it returns `0`.

In the `main` function:

- It reads an integer `n` representing the number of boxes.
- It dynamically allocates memory for an array of `n` boxes.
- It then reads the dimensions of each box (length, width, and height) from the input.
- For each box, it checks if its height is lower than `MAX_HEIGHT` using the `is_lower_than_max_height` function, and if so, it prints the volume of the box using the `get_volume` function.

Here's a summary of the program's execution:

1. Read the number of boxes `n`.
2. Allocate memory for an array of `n` boxes.
3. Read the dimensions (length, width, and height) of each box.
4. For each box, check if its height is lower than `MAX_HEIGHT`, and if so, print its volume.
5. Free the dynamically allocated memory.
6. End of the program.

This program effectively demonstrates the use of structures, dynamic memory allocation, and function usage in C.

*/

