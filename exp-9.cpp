#include <stdio.h>
#include <string.h>
int main()
{
	char string[100];
	int len;
	printf("enter the string:");
	scanf("%s",string);
	len=strlen(string);
	if(string[0]=='0'&&string[len-1]=='1')
	{
		for(int i=0;i<len;i++)
		{
			if(string[i]>'1')
			{
				printf("invalid");
				return 0;
			}
       }
     printf("The string is accepted");
}
    else 
	{
        printf("The string is not accepted.");
    }

    return 0;
}

