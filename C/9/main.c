#include <stdio.h>

int display1(int*arr, int size);
int display2(int arr[], int size);
int display3(int arr[8], int size);
int swap();

int main() {
  int arr[] = {1,2,3,4,5,6,7,8};
  printf("arr  =\t %p\n", arr);
  printf("arr[0]  =\t %p\n", &arr[0]);
  printf("*arr  =\t %p\n", &arr);
  display1(arr, sizeof arr / sizeof arr[0]);
  printf("\n");
  display2(arr, sizeof arr / sizeof arr[0]);
  printf("\n");
  display3(arr, sizeof arr / sizeof arr[0]);
  return 0;
}
int display1(int *arr, int size)
{
  for (int i = 0; i < 8; i++) 
  {
    printf("%d ", arr[i]);
  }
}

int display2(int arr[], int size)
{
  for (int i = 0; i < 8; i++) 
  {
    printf("%d ", arr[i]);
  }
}

int display3(int arr[8], int size)
{
  for (int i = 0; i < 8; i++) 
  {
    printf("%d ", arr[i]);
  }
}