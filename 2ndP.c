
#include<stdio.h>


int main(){

	int k, n ;  // this for the input of one time number and total
	int minute;
	scanf("%d%d",&k,&n);
	
	int totalSides = 2*n; // this is the total sides of pie;
	
	if(n<=k){
		printf("it needs two minutes to finish\n");
	
	}
	else{
		minute = totalSides/ k;
		if(totalSides%k !=0)
			minute += 1;
		printf("it needs %d time to finish\n",minute);
	
	}
	
	return 0;



}
