#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
 
int main(void)
{	
	int tl,kl,i,ik,it,j,n,a;
	string key;
	string text;
	unsigned char *str;
	str=(unsigned char*)malloc(100);
	key=(char*)malloc(100);
	text=(char*)malloc(100);

	printf("enter the key-");
	gets(key);
	printf("enter the text to encrypt-");
	gets(text);
	
	tl=strlen(text);
	kl=strlen(key);

		if(tl>kl)
	     {
		for(i=0;i<tl-kl;i++)
		key[i+kl]=key[i];
	     }
	
		for(j=0;j<tl;j++)
	     {
	    	ik=key[j];
            
	 	  if(ik>64&&ik<91)
	    	{  
		  ik=ik-65;
                }
	 	  if(ik>96&&ik<123)
	        { 
	 	  ik=ik-97;
                }
			  	
		key[j]=ik;	
	 	//printf("%d\n",key[j]);
	     }	  
	
	for(i=0,j=0;i<tl;i++,j++)	
	 {
	   	if((text[i]>64)&&(text[i]<91))	
	      {
		  str[i]=text[i]+key[j];
	      
                	if(str[i]>91)
			 {
		 	  n=str[i]-90;
		  	  str[i]=n+64;
		 	  }
		}
			if((text[i]>96)&&(text[i]<122))  
			{		 
		 	  str[i]=text[i]+key[j];
	         	 
				if(str[i]>122)
		 	  {
			      n=str[i]-122;				
			      str[i]=n+96;
			  }				
		        } 
		
			else
			{
			
			str[i]=text[i];
	 		j--;
			} 
   
                       printf("%c",str[i]);

	        
	  
	}
	printf("\n");
}

