#include<stdio.h>

void main(void)
{
	long long int no;
	int nos,j,k=0,i=0,a[15],sum=0,even=0,add1=0;
	
	printf("enter the card no-");	
	scanf("%lluLL",&no);
	

     if((no>99999999999999)&&(no<1000000000000000))
    {
	printf("valid card no\n");
		
	while(no!=0)
	{
	a[i]=no%10;
	no=no/10;	
	i++;	
	}
	
			  
	
	if((a[14]==3)&&(a[13]==4)||(a[14]==3)&&(a[13]==7))
	{
	printf("this is an amex card\n");	
	}
	else if((a[14]==5)&&(a[13]>0)&&(a[13]<6))
	{
	printf("this is a visa card\n");
	}	
	else if(a[14]==4)
	{
	printf("this is a mastercard\n");
	}
	else
	{ 
	 printf("this is some other card\n");
	}
	
		
	for(i=1;i<15;i=i+2)
    {
	  even=a[i]*2;	
	  
          if(even>9)
	{	
	    while(even!=0)	 
	   {
	    no=even%10;	
	    add1=add1+no;	
	    even=even/10;	
	   } 
	    even=add1;
	}  
	  	
	  sum=sum+even;
    }	
	printf("%d",sum);	
	
     
    }    
	else
	{	
	printf("invalid card\n");
	k++;	
	}
    	
}












