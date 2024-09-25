#include <stdio.h>
#include <string.h>
int main()
{
	char string[100];
	int len;
	printf("enter the string:");
	scanf("%s",string);
	len=strlen(string);
	if(string[0]=='a'&&string[len-1]=='a')
	{
		for(int i=0;i<len;i++)
		{
			if(string[i]=='0'||string[i]=='1')
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

