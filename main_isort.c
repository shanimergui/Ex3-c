
#include <stdio.h>
#include "isort.h"
int main(int argc, char const *argv[]) {
        int array[SIZE];
        for(int i=0; i<SIZE; i++) {
                int x;
                scanf("%d",&x);
                *(array+i)=x;
        }
        insertion_sort(array,SIZE);
        printf("%d",*(array+0));
        for(int i=1; i<SIZE; i++) {
                printf(",%d", *(array+i));
        }
      //printf("\n");
        return 0;
}
