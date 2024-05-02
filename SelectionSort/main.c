#include <stdio.h>

void selectionSort(int arr[], int size);
void Array(int arr[], int size);

int main()
{
  int arr[] = {9, 5, 2, 1, 3, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, size);
  Array(arr, size);
  return 0;
}

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
    {
        int largest = i;
        for (int j = i + 1; j < size; j++)
        {
          if (arr[j] > arr[largest])
          {
            largest = j;
          }
        }
        int a = arr[i];
        arr[i] = arr[largest];
        arr[largest] = a;
   }
}

void Array(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
}
