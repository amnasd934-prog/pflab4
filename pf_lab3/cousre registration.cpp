#include<stdio.h>
int main (){
	int pf , ch;
	float gp;
    printf("enter grade point ");
	scanf("%f",&gp);
	printf("press 1 for pass programming fundamental 0 for fail ");
	scanf("%d",&pf);
	printf("enter credit hours ");
	scanf("%d",&ch);
	if(pf == 1 || 0){
		if(gp>2.5 && pf == 1 && ch>=30){
		 printf("approved");
	     }	
	    else {
	    	printf("not approved");
		}
	}
	else{
			printf("enter 1 or 0 only for pass fail");
	}
	
}
