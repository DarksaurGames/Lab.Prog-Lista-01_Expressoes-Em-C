#include<stdio.h>

int main(void){
    float X;

    X = ((7 + ((3 * 6) / 2)) - 1);
    printf("A ordem da expressao e: X = ((7 + ((3 * 6) / 2)) - 1), e o resultado e: %.0f\n",X);

    X = (((2 % 2) + (2 * 2)) - (2 / 2));
    printf("A ordem da expressao e: X = (((2 %% 2) + (2 * 2)) - (2 / 2)), e o resultado e: %.0f\n",X);

    X = ((3 * 9 * 3) + ((9*3) / 3));
    printf("A ordem da expressao e: X = ((3 * 9 * 3) + ((9*3) / 3)), e o resultado e: %0.f\n",X);

    return 0;
}