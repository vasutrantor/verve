#include<cs50.h>
#include<stdio.h>

float main(void)
{
   	float change;
	int coins,sp;
	printf("enter the change owed to the customer\n");
	scanf("%f",&change);
       
   if(change<=0)
     
     {
	printf("enter the change owed to the customer");
	scanf("%f",&change);
     }
 
    else 
        {
		printf("no of 25cent coins required");
	        sp=(change*100);
		coins=sp%25;		
		scanf("%d",&coins);		
	}
}
