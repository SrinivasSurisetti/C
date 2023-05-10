#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
	int s,d;
    s = *pa + *pb;
    d = abs(*pa - *pb); 
//    printf("%d/n%d",a,b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(*pa,*pb);
    printf("%d\n%d",s,d);
    return 0;
}
