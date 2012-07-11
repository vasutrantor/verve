#include<stdio.h>
#include<cs50.h>     //for getstring & getint  
#include<string.h>   //for strlen


void main()
{
	string str;
	int i,a,key,t,n;
	printf("enter the rotation key");
	key=GetInt();	     		/*getstring have prob wid scanf 
					or use gets(str) by using dynamic mem allocation*/
	printf("enter the msg-");
	str=GetString();
	
	n=strlen(str);	
	
   for(i=0;i<n;i++)
	{
	    t=str[i];
	    if((t>64)&&(t<91)||(t>96)&&(t<123))
	     {
	        t=t+key;
	
	       if((t>91)&&(t<97))	
	         {
		   a=97-t;
		   t=a+64;
	   	 }
	      if(t>122)
	         {
		  a=t-122;
		  t=a+96;
		 }
	     }
	      
 		str[i]=t;
	}
	
	
	printf("%s",str);
	
	printf("\n");

}
