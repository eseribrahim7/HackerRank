#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int *array, int sizeOfArray){

    int c = sizeOfArray;
    int temp = 0;
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &array[i]);
        temp = temp + array[i];
    }
    return temp;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);

    // Dynamically allocate memory using malloc()
    int *arr = (int*)malloc(n * sizeof(int));
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        // printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (int i = 0; i < n; ++i) {
            scanf("%d",&arr[i]);
        }
 
        // Print the elements of the array
        /*
        printf("The elements of the array are: ");
        for (int i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        */
       printf("%d",sum(arr, n));
    }
    
    return 0;
}