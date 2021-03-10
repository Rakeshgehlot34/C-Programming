#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
void display(struct node * head){
	struct node *temp;
	temp=head;
	while(temp!=0){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main(){
	int choice=1;
	struct node *head,*new_node,*temp;
	head = 0;
	while(choice){
	new_node= (struct node *)malloc(sizeof(struct node));	
	printf("Enter the data");
	scanf("%d",&new_node->data);
	new_node->next=0;
	if(head==0){
		head = temp = new_node;
		
	}
	else{
		temp->next=new_node;
		temp=new_node;
	}
	printf("Do You want to continue(0,1)?");
	scanf("%d",&choice);
	}
	display(head);
	free(new_node);
}
