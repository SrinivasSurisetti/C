#include<stdio.h>
#include<string.h>
int main()
{
	char str1[111],str2[111];
	int i,len1=0,len2=0,f,s;
	scanf("%[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		len1++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		len2++;
	}
	i=0;
	if(len1==len2)
	{
		while(i<len1)
		{
			if(str1[i]==str2[i])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		if(i==len1) //Here i value varies with str1 nd str2 Words.
		{
			f=1;  //----> both are equal.
			printf("Equal");
		}
	}
	if(f==0) // --> ,f=0 --> not equal
	{
		if(str1[i]<str2[i])
		{
			printf("String 2 is Bigger");
		}
		else
		printf("String 1 is Bigger");
	}
	if(len1!=len2)
	{
		printf("%s",s);
	}
}
