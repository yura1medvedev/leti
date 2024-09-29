#include "sum.h"

int sum(int array[], int lenght){
    int n=min(array, lenght);
    int ind;
    for (int i=0; i<lenght; i++){
        if (array[i]==n){
           ind = i;
           break;
        }
    }
    int sum_of_nums = 0;
    for (int i=0; i<ind; i++) {
        sum_of_nums+=array[i];
    }
return sum_of_nums;
}
