#include<stdio.h>
int main(){
	int zone , speed ;
	printf("enter zone 1 = School Zone, 2 =Highway, 3 = Residential Area \n");
	scanf("%d", &zone);
	printf("enter speed ");
	scanf("%d", &speed);
	switch(zone){
		case 1 :
			if (speed>30 && speed<50){
				printf("your are fined 1000");
			}
			else if (speed>50){
				printf("your are fined 2000");
			}
		 break ;
		case 2 :
			if (speed>100 && speed<120){
				printf("your are fined 1000");
			}
			else if (speed>120){
				printf("your are fined 2000");
			}
		 break ;
		case 3 :
			if (speed>50 && speed<70){
				printf("your are fined 1000");
			}
			else if (speed>70){
				printf("your are fined 2000");
			}
		 break ;
	    default :
		 printf("invalid input"); 
		 break ;
	}
}
