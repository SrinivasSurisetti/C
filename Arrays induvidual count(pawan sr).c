#include<stdio.h>
int main()
{  
	int i,j,n,ar[n],c=0;   //={10,2,-1,2,111,2,10,147},c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&ar[i]);
	}
	for(i=0;i<=7;i++); 
	{
    for(j=1;j<=7;j++)
    {
    	if(ar[i]==ar[j])
    	{
    		c++;
		}
	printf("%d : %d\n",ar[i],c);
	}
	}
}					
