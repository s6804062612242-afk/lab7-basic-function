#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random1to100();

int main() {
    int N,i,j,rnum,numok,check=0;
    int A[100];
    scanf("%d",&N);
    if (N>100) 
        N=100;
    srand(time(NULL));  // Initialization, should only be called once.
                        // To seed the pseudo-random number generator 
                        // so that it produces a different sequence of 
                        // "random" numbers each time the program runs 
    for(i=0;i<N;i++){
    	A[i] = 0 ;
	}
    for (i=0;i<N;i++) {
        numok=1;
        while (numok==1)  {
            rnum=random1to100();
			check = 0;
            for (j=0;j<i;j++){

			if (A[j]==rnum){
               	check = 1;
               	break;
			}
		}if(check == 0){
			A[i] = rnum;
			numok = 2;
		}
		
           }
        }
        //A[i]=rnum;
    // display all Finish members
    for (i=0;i<N;i++){
	
        printf("%d ",A[i]);
  }
    return 0;
}

int random1to100() {
    int random_num = (rand() % 100) + 1;
    //printf("%d", random_num);
    return random_num;
}

