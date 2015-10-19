#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a, b, c;
    
    printf("Digite A: ");
    scanf("%d", &a);
    printf("Digite B: ");
    scanf("%d", &b);
    printf("Digite C: ");
    scanf("%d", &c);
    
    if((a <= b) && (a <= c)) {
        if(b <= c) {
            printf("Os valores ordenados são: ");
            printf("%d, %d, %d\n", a, b, c);
        } else if(c <= b) {
            printf("Os valores ordenados são: ");
            printf("%d, %d, %d\n", a, c, b);
        }
    } else if((b <= a) && (b <= c)) {
        if(a <= c) {
            printf("Os valores ordenados são: ");
            printf("%d, %d, %d\n", b, a, c);
        } else if(c <= a) {
            printf("Os valores ordenados são: ");
            printf("%d, %d, %d\n", b, c, a);
        }
    } else if((c <= a) && (c <= b)) {
        if(a <= b) {
            printf("Os valores ordenados são: ");
            printf("%d, %d, %d\n", c, a, b);
        } else if(b <= a) {
            printf("Os valores ordenados são: ");
            printf("%d, %d, %d\n", c, b, a);
        }
    }
    
    return (EXIT_SUCCESS);
}
