#include <stdio.h>

int myabs(int x){
    if(x<0){
       return x * (-1);  //nincs printf, csak returnt ad vissza.
    }
    else{
        return x;
    }
}

int main(){
    
    int x;
    x = myabs(-5);

    printf("%d\n", x);

    return 0;

}