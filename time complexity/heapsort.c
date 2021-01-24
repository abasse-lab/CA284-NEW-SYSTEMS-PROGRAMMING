// This program is created and owned by Abasse Camara.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//This functions job is to make a swap between the two elements
void swap1(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


//This function will find us the largest root between the left and right node
void heapify(int* ptr, int n, int i)
{
    int left, right, biggest;
    biggest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    //This will check if right child node is bigger than parent node
    if (right < n && ptr[right] > ptr[biggest])
        biggest = right;

    // This will check if left child node is bigger than parent node
    if (left < n && ptr[left] > ptr[biggest])
        biggest = left;

    // will stop, swap and continue heapifying if the root it finds isn't the largest
    if (biggest != i) {
        swap1(&ptr[i], &ptr[biggest]);
        heapify(ptr, n, biggest);
    }
}

int heapsort1(int* ptr, int x)
{
    int i;
    //Initialising the clock
    double time_spent = 0.0;
    clock_t begin = clock();
    // Making the max heap
    for (i = (x / 2) - 1; i >= 0; i--)
        heapify(ptr, x, i);

    // Moving largest element to the end here and then applying heapify to reduce heap
    for (i = x - 1; i >= 0; i--) {
        swap1(&ptr[0], &ptr[i]);
        heapify(ptr, i, 0);
    }

    printf("Heap Sort Algorithm: \n");
    for (i=0; i<x; i++)  
        //printf("%d\n", *(ptr + i));
    sleep(0);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Using %d integers the time elapsed is %f seconds\n", x, time_spent);
    return 0;
}
