#include <stdio.h>

int get_int(){
    int x;
    printf("Adj meg egy szamot: ");
    scanf("%d", &x);

    return x;
}

int main(){
    
    int x = get_int();
    int y = get_int();
    printf("A számok: %d, %d", x, y);

}