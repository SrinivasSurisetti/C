#include<stdio.h>
#define min(a,b)a<b?a:b 
/*int min(int a,int b) {
  return a<b ? a:b;
*/
int fib_search(int *ar,int n,int se) {
	int a,b,c,offset=-1,index;
	a=0;
	b=1;
	c=a+b;
//	printf("%d  %d",a , b);
	while(c < n) {
//		printf("%d\n",c);
		a=b;
		b=c;																			
		c=a+b;
	}
	while(c > 1) {
		index = min(offset+a,n-1);
		if(se==ar[index]) return index;
		else if(se>ar[index]) {
			//Bring all  3 fib numbs 1 fib down
		    c=b;
		    b=a;
			a=c-b;
			offset = index;
			//set offset to index
		}
		else {
			c = a;
			b = b - a;
			a = c - b;
		} 
	}
	if(b && ar[offset + 1]==se) {
		return offset + 1;
	}
	return -1;
//	printf("%d %d %d\n",a,b,c);
}
int main() {
	int n,i,index;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++) scanf("%d",&ar[i]);
	int se;
	scanf("%d",&se);
	int res = fib_search(ar,n,se);
	if(res == -1) printf("Not found");
	else printf("Element Found at %d Index",res);
}
