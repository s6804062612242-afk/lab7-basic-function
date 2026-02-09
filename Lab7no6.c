#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random1to100();

int main() {
    int M, N, i, j, r, c, rnum, numok, check;
    label:
    if (scanf("%d %d", &M, &N) == 2) {
    	if((M < 2) || (N > 20)){
    		goto label;
		}
        int A[M][N];
        srand(time(NULL));
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                numok = 1;
                while (numok == 1) {
                    rnum = random1to100();
                    check = 0; 
                    for (r = 0; r <= i; r++) {
						int limit = (r == i) ? j : N;
                        for (c = 0; c < limit; c++) {
                            if (A[r][c] == rnum) {
                                check = 1;
                                break;
                            }
                        }
                        if (check == 1) break;
                    }
					if (check == 0) {
                        A[i][j] = rnum;
                        numok = 0;
                    }
                }
            }
        }
        printf("\n---%dx%d---\n", M, N);
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                printf("%3d ", A[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("error");
    }
    return 0;
}

int random1to100() {
    return (rand() % 100) + 1;
}

