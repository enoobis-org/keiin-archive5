#include <stdio.h>
#include <stdlib.h>

void custom_malloc()
{
  printf("--- Malloc ---\n");
  int *ptr = malloc(400);
  for (int i = 0; i < 400; i++)
  {
      printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  free(ptr);
}