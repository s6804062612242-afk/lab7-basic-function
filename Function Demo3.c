#include <stdio.h>

int main() {
    int N, in, i, j;
    if (scanf("%d", &N) != 1) return 1;

    int arry[N];
    
    for(i = 0; i < N; i++) arry[i] = 0;

    for(i = 0; i < N; i++) {
        scanf("%d", &in);

        int Duplicate = 0;
        
        for(j = 0; j < i; j++) {
            if(in == arry[j]) {
               Duplicate = 1;
                break;
            }
        }

        if(Duplicate) {
            printf("been number\n");
            i--; 
        } else if(in > 0 && in < 100) {
            arry[i] = in;
        } else {
            printf("reject");
            i--; 
        }
    }

    for(i = 0; i < N; i++) {
        printf("%d ", arry[i]);
    }
    return 0;
}

