#include <stdio.h>

int gcd(int a, int b) {
    if (a<0) a= -a;
    if (b<0) b= -b;
    if (a < b) {
        int temp;
        temp= a;
        a= b;
        b= temp;
    }
    if (b == 0) return a;
    int r= a%b;
    if (r == 0) {return b;}else{return gcd(b, r);}
}

int main (void) {
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}