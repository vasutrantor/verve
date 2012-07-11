#include<stdio.h>

void main()
 {	
	int p=0,j,l,m,r,s,w,k;
	printf("enter the amount you owe to customer->");
	scanf("%d",&m);
	
	while(m<0)//to check if amount is negative	
	{
	printf("please enter a positive amount->");
	scanf("%d",&m);
	}

        
	
	p=m%25; //stores the remainder after dev by 25
	r=m/25;
	printf("no of 25 cent coins->");	
	printf("%d\n",r);	
	
	l=p%10;	//stores the remainder after dev by 10
	s=p/10;	
	printf("no of 10 cent coins->");
	printf("%d\n",s);

	j=l%5;  //stores the remainder after dev by 5 
    	k=l/5;	      
	printf("no of 5 cent coins->");
	printf("%d\n",k);      

	w=j/1;	
	printf("no of 1 cent coins->");
	printf("%d\n",w); 	
  	     
   }

