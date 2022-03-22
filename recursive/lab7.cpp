/*int rec(int n){
if (n<1)
return 1;
return n + rec(n-1) + rec(n-2);
} convert to iterative function */
#include <stdio.h>
int rec(int n){
    if (n < 1)
        return 1;
    return n + rec(n - 1) + rec(n - 2);
}
int F_iter(int n) {
    int i, ti, t1=1, t2=1;
    for(i=1; i<=n; i++){
        ti= i + t1 + t2;
        t2=t1;
        t1= ti;
    } 
    return ti;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", rec(n));
    printf("%d\n", F_iter(n));
}