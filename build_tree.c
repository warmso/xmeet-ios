#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
char data;
struct node *left;
struct node *right;
}Node;
int indexStr=0;
void build(char a[],Node *p,int indexStr)
{
	if((a[indexStr]>='a'&&a[indexStr]<='z')||(a[indexStr]>='A'&&a[indexStr]<='Z'))
	{
	p=(Node *)malloc(sizeof(Node));
	p->data=a[indexStr];
	p->left=NULL;
	p->right=NULL;
	}
	else
	return ;
	build(a,p->left,indexStr++);
	build(a,p->right,indexStr++);
	return ;
}

void output(Node *p,int flag)
{
	if(flag==0)
	{
	printf("%c",p->data);
	if(p->left!=NULL)
	output(p->left,flag);
	if(p->right!=NULL)
	output(p->right,flag);
	}
	if(flag==1)
	{
	if(p->left!=NULL)
	output(p->left,flag);
	printf("%c",p->data);
	if(p->right!=NULL)
	output(p->right,flag);
	}
	if(flag==2)
	{
	if(p->left!=NULL)
	output(p->left,flag);
	if(p->right!=NULL)
	output(p->right,flag);
	printf("%c",p->data);
	}
return ;
}

int main()
{
	char a[30];
	Node* head;
	printf("%s",a);
	build(a,head,indexStr);	
	output(head,0);
	printf("\n");
	output(head,1);
	printf("\n");
	output(head,2);
	return 0;
}
