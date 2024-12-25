#include <stdio.h>

int B(int n, int k) {
    // C(n, k) = n! / (k! * (n - k)!)
    if (k == 0 || k == n)
        return 1;
    return B(n - 1, k - 1) + B(n - 1, k);
}

/* 
            I
          I n
        I n f
      I n f 3
    I n f 3 c
  I n f 3 c t
I n f 3 c t Labs
*/

int main() {   
    // int R;
    // printf(":");
    // scanf("%d", &R);
    int R = 7;
    char *W = "Inf3ct";
    for (int i = 0; i < R; i++) {
        for (int s = 0; s < R - i - 1; s++) printf("  ");
        for (int j = 0; j <= i; j++) {
            j < 6 ? printf("%c", W[j]) : printf(i >= 6 ? "Labs" : "%d", B(i, j));
            if (j < i) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
