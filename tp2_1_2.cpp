#include <stdio.h>
#define N 4
#define M 5

int main(void){
    int f,c;
    double mt[N][M] = {
        {1, 2,  3,  4, 0},
        {0, 6,  7,  8, 0},
        {9, 10, 11, 12, 0},
        {13, 14, 10, 16, 0}
    };

    double *p_mt = &mt[0][0];

    for(f = 0; f < N; f++)
    {
        for(c = 0; c < M; c++){

            printf("%.4lf ", *(p_mt++));

        }

        printf("\n");
    }

    return 0;
}
