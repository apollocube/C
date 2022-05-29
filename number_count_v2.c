#include <stdio.h>

/* version 2*/
int main(){
    double nc = 0;
    for (; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}