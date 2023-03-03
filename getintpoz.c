#include <stdio.h>

int getpoz_int(){
    int x;

    do{
        x = get_int();
    }
    while(x<0);
    return x;
}

int get_int(){
    int x;
    printf("Adj meg egy szamot: ");
    scanf("%d", &x);

    return x;
}

int main(){
    
    int x = getpoz_int();
    int y = getpoz_int();
    printf("A számok: %d, %d", x, y);
}