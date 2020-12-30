#include "isort.h"
//{13 , 13 , 11 , 18 ,5 ,6}
//arr[1]=arr[0]

void shift_element(int* arr, int i){
  //int temp = *(arr+i);
  while(i>0){
    *(arr+i)= *(arr+i-1);
    i--;
  }
//  *(arr)=temp;
}
void insertion_sort(int* arr , int len){
  int i, key, j;
  for (i = 1; i < len; i++) {
      key = *(arr+i);
      j = i - 1;

      /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
      while (j >= 0 && *(arr+j) > key) {
          *(arr+j+1) = *(arr+j);
          j = j - 1;
      }
    *(arr+j+1) = key;
  }
}
