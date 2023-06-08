
#include<stdio.h>
char pr(int n);
int main() {
	int n;
	scanf("%d",&n);
	printf("%c",pr(n));
}
char pr(int n) {
	int i,c=0;
	for(i=2;i<n;i++) {
		if(n%i==0) c++;
	}
	if(c==0) return 'P';
	else return 'N';
}
