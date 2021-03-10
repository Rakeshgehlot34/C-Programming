//Sum of the squares of sum of row of column
#include<stdio.h>
int main() {
	int rowindex,columnindex;
	int rowsum=0,rowsquare=0,totalsum=0;
	int i,j;
	int matrix[100][100];
	printf("Enter the order of matrix (m*n) : ");
	scanf("%d %d",&rowindex,&columnindex);
	printf("Enter the matrix ");
	for(i=0;i<rowindex;i++){
		for(j=0;j<columnindex;j++){
			printf("i=%d j=%d ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nMatrix that you are enter is : \n");
	for(i=0;i<rowindex;i++){
		for(j=0;j<columnindex;j++){
			printf("i=%d j=%d %d \t",i,j,matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rowindex;i++){
		for(j=0;j<columnindex;j++){
		rowsum=rowsum+matrix[i][j];
		}
		rowsquare=rowsum*rowsum;
		rowsum=0;
		totalsum=totalsum+rowsquare;
	}
	printf("Sum of square of addition of row = %d",totalsum);
	getch();
}
