#include<stdio.h>
#include<stdlib.h>

typedef struct bst {
	int data;
	struct bst *left,*right;
}node;

void traverse_inorder(node *r){
	if(r!=NULL){
	traverse_inorder(r->left);
	printf("%d\t",r->data);
	traverse_inorder(r->right);
	traverse_inorder(r->right);
   }
}
void insert(node **r,int num){
     node *temp,*ptr;
     temp=*r;
     ptr=(node*)malloc(sizeof(node));
     ptr->data=num;
     ptr->left=NULL;
     ptr->right=NULL;
     if(temp==NULL)
     {
        *r=ptr;
	}
        else{
			if(num>temp->data){
				if(temp->right==NULL);
				    temp->right=ptr;
				}
				    else
			  insert(&temp->right,num);
	}
	{
			else 
				if(temp->left==NULL)
				    temp->left=ptr;
				
			else	    
			  insert(&temp->left,num);
		}  
    }
}
int search_bst(node *r,int num){
	
	if (r==NULL)
	return 0;
	else {
		if(r->data==num)
		 return 1;
		 else{
			if(num>r->data)
			 return search_bst(r->right,num);
			  else
			  return search_bst(r->left,num);
			}
		}
	}
void search_node{node x,node *root,node **parent,node **xsucc,int num,int *f){
}
void delete(node **r,int num){
	node *temp,*parent,*xsucc,*x;
	int f=0;
	*parent=NULL;x=NULL:
	temp=*r;
	search_node(&x,temp,&parent,&xsucc,num,&f);
	if(f==0){
		 printf("\n the element %d is not found",x);
		 return;
	 }
	 if(x->left==NULL && x->right==NULL)
	 {
	 }
	 else if(x->left!=NULL)
	 {
		 }
	 else if (x->right!=NULL)
	 {
	 }
	 else if(x->left!=NULL && x->right!=NULL){
	 }
	 
	
	 
}			  		    
int main() {
	node *root=NULL;
	insert(&root,20);
	insert(&root,10);
	insert(&root,25);
	insert(&root,2);
	insert(&root,12);
	traverse_inorder(root);
	if(search_bst(root,30)==1)
	  printf("\n the number is found");
	  else
	  printf("\n the number is not found")
	return 0;
}


