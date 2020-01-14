#include<stdio.h>
#include<stdlib.h>

int main(){
	int a ; 
	int b ;
	int c ;
	int i ;

	scanf("%d%d%d",&a,&b,&c);
	printf("the number of input: %d,%d,%d", a,b,c);
	for(i = 10 ; i<=100; i++){
		if(i%3==a && i%5 ==b && i%7 == c){
			printf("the number of soilders are: %d", i);
			break;	
		}
//		else
//#		printf("NO anwer");
	}
	
	
	
	return 0;


}
