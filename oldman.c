#include<stdio.h>
#include<string.h>
#include<cs50.h>
void main()

{
	int i;
	string linea[]={"one","two","three","four","five","six","seven","eight","nine","ten"};
	string lineb[]={"on my knee","on my door","on my hive","my sticks","up in heaven", "on my gate","once again"};
	
	for(i=0;i<10;i++)
	{
	printf("This old man, he played %s\nHe played knick-knack on %s\npaddywhack, give your dog a bone\nThis old man came rolling home\n\n",linea[i],lineb[i]);
	}

}
