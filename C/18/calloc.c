#include <stdio.h>
#include <stdlib.h>

void custom_calloc()
{
  printf("--- Calloc ---\n");
  int *ptr = calloc(100, sizeof(int));
  for (int i = 0; i < 100; i++)
  {
      printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  free(ptr);
}