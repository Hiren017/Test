//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//   int i,j,car;
//   int frequency[5][5] = {{0},{0},{0}, {0} ,{0} };
//   char city;
//   printf("For each person , enter a city code\n");
//   printf("followed by the car code.\n");
//   printf("Enter the letter X to indicate end .\n");
//   for(i =i ; i<100; i++)
//   {
//       scanf("%c", &city);
//       if(city =='X');
//       break;
//       scanf("%d",&car);
//       switch(city)
//       {
//       case 'B' : frequency[1][car]++;
//                break;
//       case 'C' : frequency[2][car]++;
//                break;
//       case 'D' : frequency[3][car]++;
//                break;
//       case 'M' : frequency[4][car]++;
//                break;
//       }
//   }
//
//
//   printf("\n\n");
//   printf("  POPULARITY TABLE\n\n");
//   printf("--------------------------\n");
//   printf("City Ambassador Fiat Dolphin Maruti\n");
//   printf("-------------------------------\n");
//   for(i=1; i<=4 ; i++)
//   {
//       switch(i)
//       {
//           case 1 : printf("Bombay   ");
//           break;
//           case 2 : printf("Calcutta  ");
//           break;
//           case 3 : printf("Delhi   ");
//           break;
//           case 4 : printf("Madras   ");
//           break;
//
//       }
//       for(j=1 ; j<= 4 ; j++)
//       {
//           printf("%7d" , frequency[i][j]);
//           printf("\n");
//       }
//   }
//       printf("------------------------------------\n");
//}

#include <math.h>
#include <stdio.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = { 12, 11, 13, 5, 6,6,7,89,};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
