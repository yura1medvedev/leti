#include "diff.h"

int diff(int array[], int lenght){
    return max(array, lenght)-min(array, lenght);
}
