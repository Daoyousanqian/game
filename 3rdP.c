#include<stdio.h>



int main(){
	

	int N; //input the number will be transfered
	int R; //Rdimal.
	char result[90];

	while(scanf("%d %d", &N,&R) !=EOF){
		
		
		int flag = 1;
		int i = 0;
		int number = N;
		printf("the number is : %d %d\n", N, R);		
		if(2<=R<=16 && R!=10){
			printf("the number is : %d \n",number);	 
			if(N<0)
				printf("N input error");
			else{
				while(number){
				
					if (number%R > 9)
						result[i] = number%R - 10 + 'A';
					else
						result[i] = number%R +'0' ;
					number = number / R;		
					i++;

				}
				printf("below is the number tranfered:");

				for( int j = i-1; j>= 0; j-- )
					printf("%c", result[j]);
				printf("\n");
			}

		}
		else
			printf("R input error");

	}
	

}
