// Give difffrnc b/w sum and prdt of 4 given integers
#include<stdio.h>
int num(int a,int b,int c,int d);
int main() {
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d",num(a,b,c,d));
}
int num(int a,int b,int c,int d) {
	int x =a + b;
	int y =c * d;
	return x - y;
}
