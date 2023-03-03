#include <stdio.h>

int main() {

    /*for(int i = 0; i<10; i++){
        if(i==5){
            continue;
        }
        printf("%d", i);
    }
    */
    int i = 0;
    while (i<10)
    {
        if(i==5){
            continue;
        }
        printf("%d", i);
        i++;
    }
    

    return 0;
}