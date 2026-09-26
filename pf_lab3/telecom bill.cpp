#include<stdio.h>
int main(){
	int plan , min ,bill,extra = 0 ;
	printf("press 1 = Plan 1 (Rs. 500 for 1000 minutes) \n 2 = Plan 2 (Rs.800 for 2000 minutes)\n 3= Plan 3 (Rs. 1200 for unlimited minutes)\n 4 = Plan 4 (custom plan billed at Rs.1/minute) \n");
	scanf("%d", &plan);
	printf("enter mintues ");
	scanf("%d", &min);
	switch(plan){
		case 1 :
			if (min>1000){
			 extra = (min - 1000)*2;	
			}
		 bill = 500 + extra;
		 printf("your bill is %d", bill);
		 break ;
		case 2 :
			if (min>2000){
			 extra = (min - 2000)*2	;
			}
		 bill = 800 + extra;
		 printf("your bill is %d", bill);
		 break ;
		case 3 :
		 printf("your bill is 1200");
		 break ;
		case 4 :
			printf("your bill is %d", min);
	    default :
		 printf("invalid input"); 
		 break ;
	}
}
