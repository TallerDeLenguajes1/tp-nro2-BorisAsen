#include <stdio.h>
#include <conio.h>
#define N 4
#define M 5

int main(){
	int f,c;
	int mt[N][M];

	for(f = 0;f<N; f++){
 		for(c = 0;c<M; c++){
			mt[f][c]=c;
		}
	}

	for(f = 0;f<N; f++){
 		for(c = 0;c<M; c++){
			printf("%d", mt[f][c]);
		}
		printf("\n");
	}
	return 0;
}
