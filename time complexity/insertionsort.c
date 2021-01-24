// This program is created and owned by Abasse Camara.
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>

int insertion(int* ptr, int x){
    int i, j, temp;
    //Initialising the clock
    double time_spent = 0.0;
    clock_t begin = clock();
    // Simply going through the list here
    for(i=1;i<x;i++)
    {
        temp=*(ptr+i);
        j=i-1;
        // Simply moving elements in the array 
        // we gave that are greater than temp variable to one position ahead of current one 
        while(temp<*(ptr+j)&&j>=0)
        {
            *(ptr+(j+1))=*(ptr+j);
            j--;
        }
        *(ptr+(j+1))=temp;
    }
    printf("Insertion Sort Algorithm: \n");
    for(i=0;i<x;i++)
      //printf("%d\n",(ptr[i]));
    sleep(0);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Using %d integers the time elapsed is %f seconds\n", x, time_spent);
    return 0;
}
