

/* Insertion sort ascending order */
 
#include <stdio.h>
 
int main()
{
  int value, array[1000], c, d, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &value);
 
  printf("Enter %d integers\n", value);
 
  for (c = 0; c < value; c++) {
    scanf("%d", &array[c]);
  }
 
  for (c = 1 ; c <= value - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d-1] > array[d]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= value - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
