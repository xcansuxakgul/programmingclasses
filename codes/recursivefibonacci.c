#include <stdio.h>


int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n,i;
   printf("enter n");
   scanf("%d",&n);
   for(i = 1;i<=n;i++) {
      printf("%d ",fibbonacci(i));            
   }
}
