// This program is created and owned by Abasse Camara
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>

// Implentation of radix sort
int radix(int* ptr, int x){
    int max = ptr[0];
    int i;
    double time_spent = 0.0;
    clock_t begin = clock();
    //finding max element
    for(int i=1;i<x;i++){
        if(max < ptr[i])
            max = ptr[i];
    }
 
    // Counting number of max numbers
    int digits = 0;
    while(max > 0){
        digits++;
        max /= 10;
    }
 
    int power = 1;
 
    // Arranging the numbers on the basis of digits
    for(int i=0;i<digits;i++)
    {
 
        int array[x];
 
        // Counting Sort Array
        int count[10];
 
        // Initializing the Count Array
        for(int j=0;j<10;j++)
            count[j] = 0;
 
        // calculating frequency of digits
        for(int j=0;j<x;j++){
 
            int num = (ptr[j]/power) % 10;
 
            count[num]++;
        }
 
        // Cumulative frequency of count array
        for(int j=1;j<10;j++){
            count[j] += count[j-1];
        }
 
        // Designating new positions in the updated array
        for(int j=x-1;j>=0;j--){
 
            // The digit under consideration in this iteration
            int num = (ptr[j]/power) % 10;
 
            array[count[num]-1] = ptr[j];
            count[num]--;
        }
 
        // Updating the original array using New Array
        for(int j=0;j<x;j++)
            ptr[j] = array[j];
         
        // Updating the digit to be considered next iteration
        power *= 10;
    }
    printf("Radix Sort Algorithm: \n");
    for (i=0; i<x; i++) 
        //printf("%d\n", *(ptr + i));
    sleep(0);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Using %d integers the time elapsed is %f seconds\n", x, time_spent);
    return 0;
}
