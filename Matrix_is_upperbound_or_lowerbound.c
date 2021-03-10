#include<stdio.h>
int main(){
	int n;
	int a;
	int p;
	int q;
	int rowindex;
	int columnindex;
	scanf("%d",&n);
	rowindex=0;
	columnindex=0;
	p=0;
	q=0;
	while(rowindex < n){
		while(columnindex < n){
			scanf("%d",&a);
			if(columnindex > rowindex){
				p=p+a;
			}
			else if(columnindex < rowindex){
				q=q+a;	
			}
			columnindex=columnindex+1;
		}
		columnindex=0;
		rowindex=rowindex+1;
	}
	if((p==0) && (q==0)){
		printf("2\n");
	}
	else if(p==0){
		printf("-1\n");
	}
	else if(q==0){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	return 0;
}
