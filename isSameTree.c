#include<Stdio.h>
#include<stdlib.h>
#include<stdbool.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
 };

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL){
        return false;
    }
    if(p->val != q->val){
        return false;
    }
    return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
}

void main(){
	struct TreeNode n1,n2,n3;
	n1.val=1;
	n2.val=2;
	n3.val=3;
	
	n1.left=&n2;
	n1.right=&n3;
	
	
	n2.left=NULL;
	n2.right=NULL;
	
	n3.left=NULL;
	n3.right=NULL;
	
	struct TreeNode m1,m2,m3;
	
	m1.val=1;
	m2.val=2;
	m3.val=3;
	
	m1.left=&n2;
	m1.right=&n3;
	
	
	m2.left=NULL;
	m2.right=NULL;
	
	m3.left=NULL;
	m3.right=NULL;
	
	if(isSameTree(&n1,&m1)){
		printf("Trees are same");
	}
	else{
		printf("Trees are  not same");
	}
	
		
}