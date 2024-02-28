#include <stdio.h>
#include <stdlib.h>

void malloc_realloc()
{
  printf("--- realloc for malloc ---\n");
  int *ptr = malloc(400);
  for (int i = 0; i < 400; i++)
  {
      printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  ptr = realloc(ptr, 800);
  printf("ptr = %p\n", ptr);
  for (int i = 0; i < 400; i++)
  {
      printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  free(ptr);
}

void calloc_realloc()
{
  printf("--- realloc for malloc ---\n");
  int *ptr = calloc(100, sizeof(int));
  for (int i = 0; i < 400; i++)
  {
      printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  ptr = realloc(ptr, 800);
  printf("ptr = %p\n", ptr);
  for (int i = 0; i < 400; i++)
  {
      printf("ptr[%d] = %d\n", i, ptr[i]);
  }
  free(ptr);
}