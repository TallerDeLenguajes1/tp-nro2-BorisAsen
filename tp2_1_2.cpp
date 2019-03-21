#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 4
#define M 5

int main(){
	int f,c;
	int mt[N][M];
	int * punt;

	punt=&mt[0][0];
	
	for(f = 0;f<N; f++){
 		for(c = 0;c<M; c++){
			mt[f][c]=c;
		}
	}


	for(f = 0;f<N; f++){
 		for(c = 0;c<M; c++){
			cprintf("%d ", *(punt+c));
		}
		cprintf("\n");
	}

	return 0;
}
