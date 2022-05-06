#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int i,j;
    int arr[9]= {5,8,4,-9,2,8,7,1,0};
    
    for(i=0;i<9;i++){
        for(j=0;j<9-(i+1);j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(int i=0;i<9;i++){
        printf("%d\t",arr[i]);
    }
}