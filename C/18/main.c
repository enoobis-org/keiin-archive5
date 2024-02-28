#include "malloc.h"
#include "calloc.h"
#include "realloc.h"
int main()
{
  custom_malloc();
  custom_calloc();
  malloc_realloc();
  calloc_realloc();
  return 0;
}