// This program is created and owned by Abasse Camara
#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
#include <unistd.h>

// Implementation of Shell Sort
int shellsort(int* ptr, int x)
{
  int i;
  double time_spent = 0.0;
  clock_t begin = clock();
  // Initialising intervals
  int inter;
  // Simply rearranging the elements of the array at each intervals we made
  for (inter = x /2 ; inter > 0; inter /= 2)
  {
    for (int i = inter; i < x; i += 1) {
      int temp = ptr[i];
      int j;
      // Comparing intervals
      for (j = i; j >= inter && ptr[j - inter] > temp; j -= inter) {
        ptr[j] = ptr[j - inter];
      }
      ptr[j] = temp;
    }
  }
  printf("Shell Sort Algorithm: \n");
  for (i=0; i<x; i++)  
    //printf("%d\n", *(ptr + i));
    sleep(0);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Using %d integers the time elapsed is %f seconds\n", x, time_spent);
  return 0;
}
