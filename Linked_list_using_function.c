#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
void create_node(int n){
	int i=0,k;
	char choice;
	struct node *new_node,*head,*temp;
	head=0;
	while(i<n){
	
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data");
	scanf("%d",&new_node->data);
	new_node->next=0;
	if(head==0){
		head=new_node;
		temp=new_node;
	}
	else{
		temp->next=new_node;
		temp=new_node;
	}
	i++;
	if(i==n){
		printf("you want to extand no. of nodes(Y,N)? ");
		scanf("%c\n",&choice);
		if(choice=='Y'){
			printf("How many nodes :");
			scanf("%d",&k);
			n=n+k;
		}
	}
}
}
void display(){
	struct node *head,*temp;
	temp=head;
	while(temp!=0){
	printf("%d\n",temp->data);
	temp=temp->next;
	}
	free(temp);
}
int main(){
	int n;
	printf("Enter the no of nodes");
	scanf("%d",&n);
	create_node(n);
	display();
}
