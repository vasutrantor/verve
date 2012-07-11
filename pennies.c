#include<cs50.h>
#include<stdio.h>


int main(void)
{
        int d,i,p=1,q=1,l;
	
	while(q=1)	
{	
	printf("enter the no of days in a month\n");
	scanf("%d",&d);
 
//no of days within a month
	
	
	if(d>=27&&d<=31)
      
    {	 
	
         printf("enter no of pennies per day");
         scanf("%d",&l);
	
	 for(i=0;i<d;i++)
    {
	p=l*p;
    }	
	d=d-1;
	printf("no of pennies is=" );
    	printf("%d\n",p);	
  
  	q=0;   
       exit(1);
	}
   
 	else
	{
	  q=1;
	}
}
}
