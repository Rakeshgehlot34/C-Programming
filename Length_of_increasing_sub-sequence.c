//Length of increasing contiguous sub-sequence
/*#include<stdio.h>
int main() {
	int a[100],b,n,i=0,count=1;
	printf("Enter the total Length of the sequence : ");
	scanf("%d",&n);
	printf("Enter the sequence : ");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		if(a[i-1]<a[1]) {
			count=count+1;
		}
		else {
			printf("Length is = %d\n",count);
			count=1;
		}
	}
		printf("Length is = %d",count);
}*/
/*
#include<stdio.h>
int main() {
	int curr,pre,len=0;
	int maxlen=0;
	printf("Enter the sequence");
	scanf("%d",&pre);
	if(pre!=-1) {
		len=1;
		maxlen=1;
		scanf("%d",&curr);
		while(curr!=-1) {
			if(pre<curr) {
			len=len+1;
		}
		else {
			if(maxlen<len)
			maxlen=len;
			len=1;
		}
		
		pre=curr;
		scanf("%d",&curr);
		}
	}
	else{
		len=1;
		maxlen=1;
	}
	if(maxlen<len){
		maxlen=len;
	}
	printf("Length= %d",maxlen);
	getch();
	return 0;
}
*/
//using do-while
#include<stdio.h>
int main() {
	int curr,pre;
	auto int len,maxlen;
	printf("Enter the sequence = ");
	scanf("%d",&pre);
	if(pre!=-1){
	do{
		scanf("%d",&curr);
		if(curr>pre){
			len=len+1;
		}
		else{
			if(maxlen<len)
			maxlen=len;
			len=1;
		}
		pre=curr;
		
	}while(curr!=-1);
}
	else{
		len=1;
		maxlen=1;
	}
	if(maxlen<len){
		maxlen=len;
	}
		printf("length is = %d",maxlen);
}
