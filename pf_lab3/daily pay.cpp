#include<stdio.h>
int main (){
	int hours,rating,pay ;
	printf("no of hours employrr worked \n");
	scanf("%d",&hours);
	printf("your rating \n");
	scanf("%d", &rating);
	if(rating>=1 && rating<=5){
	 if(rating>3 && hours>8){
	     pay=750*hours;}
	 else{
	 	pay=500*hours;
	 }
	 printf("your total daily pay is %d",pay);		
	}
	else{
		printf("rating must be between 1 to 5");
	}
}
