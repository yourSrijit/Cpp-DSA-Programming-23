#include <stdio.h>

int main(){
    int n=40;
    int *j;
    j =&n;
    printf("%d",j);
    printf("\n");
     printf("%d",j+1);
    return 0;
}