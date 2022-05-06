#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j, *P[3];

    for (i = 0; i < 3; i++)
    {
        P[i] = (int *)malloc(sizeof(int) * (i+1)*2);
        if (P[i] == NULL)
        {
            printf("Memory Error!\n");
            exit(1);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<((i+1)*2);j++){
            *(P[i]+j) =i+j;
            printf("%3d",P[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<((i+1)*2);j++){
            *(P[i]+j) =i+j;
            printf("%d ",&P[i][j]);
        }
        printf("\n");
    }
}
