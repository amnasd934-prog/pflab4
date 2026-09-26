#include<stdio.h>
int main (){
	int amount , premium ,location;
    printf("enter oder amount ");
	scanf("%d",&amount);
	printf("press 1 for premium member 0 for not ");
	scanf("%d",&premium);
	printf("press 1 for outside home city 0 for inside ");
	scanf("%d",&location);
	if((premium == 1 || 0) || (location == 1 || 0)){
		if(amount>3000 || premium == 1) {
		 printf("Free delivary \n");
	     }	
	    if (amount<50000 && location == 1) {
	    	printf("COD avaliable \n");
		}
		else{
	    	printf("COD not avaliable \n");
		} 
	 printf("your amount is %d" ,amount);
   }
	else{
			printf("enter 1 or 0 for premium member and loction");
	}
	
}
