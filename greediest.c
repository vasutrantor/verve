#include<stdio.h>

int main()
 {	float m;
	int p,j,l,r,s,w,b,k,i,o,g,h;
	printf("enter the amount you owe to customer->$");
	scanf("%f",&m);
	
	while(m<0)//to check if amount is negative	
	{
	printf("please enter a positive amount->$");
	scanf("%f",&m);
	}

        
	
	
	r=(m*100);
	p=r%25; //stores the remainder after dev by 25	
	o=r/25;
	printf("no of 25 cent coins->");	
	printf("%d\n",o);	
	
		
	l=p%10;	//stores the remainder after dev by 10		
	g=p/10;	
	printf("no of 10 cent coins->");
	printf("%d\n",g);

    	      
	j=l%5;  //stores the remainder after dev by 5 
	h=l/5;	
	printf("no of 5 cent coins->");
	printf("%d\n",h);      

	
	b=j/1;	
	printf("no of 1 cent coins->");
	printf("%d\n",b); 	
  	     
   }

