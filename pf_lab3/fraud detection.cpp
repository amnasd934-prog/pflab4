#include<stdio.h>
int main (){
	int transaction , location;
    printf("enter transaction amount ");
	scanf("%d",&transaction);
	printf("press 1 for outside home city 0 for inside ");
	scanf("%d",&location);
	if(location == 1 || 0){
		if((transaction>100000 && location == 1) || transaction>500000){
		 printf("Flagged for Review");
	     }	
	    else {
	    	printf("approved");
		}
	}
	else{
			printf("enter loction 1 or 0 ");
	}
	
}
