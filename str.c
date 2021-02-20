#include<stdio.h>
#include<string.h>
void main()
{
 char a[100];
 int i;
 printf("enter a string\n");
 gets(a);
 printf("%c",a[0]);
 for(i=1;a[i]!='\0';i++)
 {
 	/*if(a[i+1]==32||a[i+1]=='\0')
 	printf("%c\n",a[i]);*/
 	if(a[i]==32)
 	printf("%c",a[i+1]);
	}   
}
