#include<stdio.h>
#include<string.h>

int main()
{
	char msg[]="PEDYANG MK";
	int len,i;
	
	len=strlen(msg);
	for(i=0;i<len;i++)
		printf("%d : %c\n", i, msg[i]);

	return 0;
}