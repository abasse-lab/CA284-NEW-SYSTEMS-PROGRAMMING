// This program is created and owned by Abasse Camara
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>

int numgen(int* ptr, int x){
    int i;
    //sets the seed of our random number generator so we get different integers
    srand(time(NULL));
    // Creating a random list to start off
    for (i=0; i<x; i++){
        *(ptr + i) = ( rand()%1000 )+1;
    }
    //printf("Original List\n");
    for (i=0; i<x; i++)
    {    
        //printf("%d\n", *(ptr + i));
    }
    return 0;
}
