#include <stdio.h>
#include <stdlib.h>

int mdc (int a, int b) {

    a = abs(a);
    b = abs(b);

    while (b != 0) {

        int rest = a % b;
        a = b;
        b = rest;

    }
    return a;

}


int main() {

    int N1,D1,N2,D2,cases;
    char op;
    char barr1, barr2;
    int num_r, den_r;
    if ( scanf("%d", &cases) != 1) return 0;

    while (cases--) {

        scanf(" %d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2 );


        switch (op) {

            case '+':
                num_r = N1 * D2 + D1 * N2;
                den_r = D1 * D2;
                break;
            case '-':
                num_r = N1 * D2 - D1 * N2 ;
                den_r = D1 * D2;
                break;
            case '*':
                num_r = N1 * N2;
                den_r = D1 * D2;
                break;
            case '/':
                num_r = N1 * D2;
                den_r = N2 * D1;
                break;
        }

        int div = mdc(num_r, den_r);
        int n_simp = num_r / div;
        int d_simp = den_r / div;

        printf("%d/%d = %d/%d\n", num_r, den_r, n_simp, d_simp);


    }

    return 0;

}