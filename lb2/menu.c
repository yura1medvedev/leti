#include <stdio.h>
#include "max.h"
#include "min.h"
#include "diff.h"
#include "sum.h"

int main(){
    int v, n, array[100], lenght;
    scanf("%d", &v);
    if (v>3 || v<0) {
        printf("Данные некорректны\n");
        return 0;
    }
    for (int i=0; i<=100; i++){
        if (scanf("%d", &n)==1){
            array[i]=n;
        } else{
            lenght=i;
            break;
        }
    }
    switch(v){
        case 0:{
            printf("%d\n", max(array, lenght));
            break;
        }
        case 1:{
            printf("%d\n", min(array, lenght));
            break;
        }
        case 2:{
            printf("%d\n", diff(array, lenght));
            break;
        }
        case 3:{
            printf("%d\n", sum(array, lenght));
            break;
        }

    }

return 0;
}
