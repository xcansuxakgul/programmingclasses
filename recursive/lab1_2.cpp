/* #include <stdio.h>
int Rec_GCD(int m, int n, int common){
    if (m == 1 && n == 1) return 1;
    if (m % common == 0 || n % common == 0){
        if (m % common == 0)
            m = m / common;
        if (n % common == 0)
            n = n / common;
        return common * Rec_GCD(m, n, common);
    }
    else return Rec_GCD(m, n, common + 1);
}
int LCM(int m, int n){
    return Rec_GCD(m, n, 2);
}
int main(){
    printf("%d\n", LCM(10, 15));
    return 0;
} */
#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}