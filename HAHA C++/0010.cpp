#include <stdio.h>
#include<string.h>
#include<math.h>
main()
{
char input[100];
int pos = 1;
scanf("%s",input);
for(int i =0;i<strlen(input);i++)
{
	if(input[i]=='A'&&pos==1)
		pos+=1;
	else if(input[i]=='A'&&pos==2)
		pos-=1;
	else if(input[i]=='B'&&pos==2)
		pos+=1;
	else if(input[i]=='B'&&pos==3)
		pos-=1;
	else if(input[i]=='C'&&pos==3)
		pos = 1;
	else if(input[i]=='C'&&pos==1)
		pos = 3;
						
}
printf("%d",pos);
	
}