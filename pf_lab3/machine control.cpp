#include<stdio.h>
int main (){
	int pressure , temp;
	printf("enter temperature ");
	scanf("%d",&temp);
	printf("enter pressure ");
	scanf("%d",&pressure);
    if(temp<100 || pressure<250){
		 if (temp>=85 && temp<=100 && pressure>=200 && pressure<= 250) {
	    	printf("Warning Mode");
		}
	}
   return 0;
}
