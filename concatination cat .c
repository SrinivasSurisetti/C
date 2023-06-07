/*#include<stdio.h>
int main()
{
    char str1[121],str2[122]; //end ofthe string index is = \0
    int len=0,i;
    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2); //---> To take 2nd input.
    for(i=0;str1[i]!='\0';i++)
    {
         len++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
    	str1[len]=str2[i];
    	len++;
	}
	str1[121]='\0';
	printf("%s",str1);
}*/

#include<stdio.h>
int main()
{
    char str[121]; //end ofthe string index is = \0
    int len=0,i,temp,j;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
         len++;
    }
    i=0;
    j=len-1;
    while (i<j)
    {
    	temp=str[i];
    	str[i]=str[j];
    	str[j]=temp;
    	i++;
    	j--;
    	
	}
	printf("%s",str);
}

