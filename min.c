#include "min.h"

int min(int array[], int lenght){
    int minn=100;
    for (int i=0; i<lenght; i++) {
       if (array[i]<minn){
           minn=array[i];
       }
    }
return minn;
}
