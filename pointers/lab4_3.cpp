#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, N, *p,*max;
    printf("Size of dynamic array: ");
    scanf("%d", &N);
    p = (int *) malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
    {
        printf("p[%d] = ", i);
        scanf("%d", &p[i]);
    }
    max = &p[0];
    for(i=0; i < N-1; i++){
        if(*max< p[i]) max = &p[i];
    }
    printf("%d",*max);
    free(p);
}