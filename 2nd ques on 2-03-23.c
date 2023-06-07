//create a prm that return 1 if first num divisble by 2nd else return 0.
#include<stdio.h>
int num(int a,int b);
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",num(a,b));
}
int num(int a,int b) {
	if(a%b==0) return 1;
	else return 0;
}

