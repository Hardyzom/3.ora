#include <stdio.h>

int main() {


    int i = 0;
    while (i<100)
    {   
        i++;
        if(i%3==0){
            continue;
        }
        else{
        printf("%d\n", i);
        
        }
        
    }
    

    return 0;
}