#include<stdio.h>
char mk(int n);
int main() {
	int n=40,n1=84,n2=94,n3=69;
	printf("%c\n",mk(n));
	printf("%c\n",mk(n1));
	printf("%c\n",mk(n2));
	printf("%c\n",mk(n3));
}
char mk(int n) {
	if(n>=90)  return 'A';
	else if(n>=80 && n<90)  return 'B';
	else if(n>=70 && n<80)  return 'C';
	else if(n>=60 && n<70)  return 'D';
	else  return 'E';
}
