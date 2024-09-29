#include "max.h"

int max(int array[], int lenght){
    int maxn=-100;
    for (int i=0; i<lenght; i++) {
       if (array[i]>maxn){
           maxn=array[i];
       } 
    }
return maxn;
}
