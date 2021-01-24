// This program is created and owned by Abasse Camara
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>

// Header files to propogate declaration to the main files
#include "number_generator.h"
#include "heapsort.h"
#include "radix.h"
#include "shellsort.h"
#include "insertion.h"


int main(int argc, char **argv)
{
   int i;
   // Using command line arguement to get the size of my array
   int x = atoi(argv[1]);
   // Using calloc to dynamically allocate memory
   int *ptr = (int*)calloc(x, sizeof(int));
   // Simply checking wether the memory has been allocated successfully or not
   if (ptr == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
   }
   // If allocated correctly simply call our header functions.
   else {
      printf("Memory successfully allocated by the use of calloc.\n");
      numgen(ptr, x);
      radix(ptr, x);
      heapsort1(ptr, x);
      shellsort(ptr, x);
      insertion(ptr, x);
   }
   return 0;
}
