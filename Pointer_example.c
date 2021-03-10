#include<stdio.h>
int funct1(int u, int v);
int funct2(int *pu, int *pv);
int main() {
	int v=3, u=1;
	printf("\nBefore calling funct1: u=%d, v=%d",u,v);
	funct1(u,v);
	printf("\nAfter calling funct1: u=%d, v=%d",u,v);
	printf("\nBefore calling funct2: u=%d, v=%d",u,v);
	funct2(&u,&v); //int this part &u=*pu and &v=*pv
	printf("\nAefore calling funct2: u=%d, v=%d",u,v);
}
int funct1(int u, int v) {
	u=0;
	v=0;
	printf("\n within funct1: u=%d v=%d",u,v);
}
int funct2(int *pu, int *pv) {
	*pu=0;
	*pv=0;
	printf("\n within funct2: *pu=%d *pv=%d",*pu,*pv);
}
