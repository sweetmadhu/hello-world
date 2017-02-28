#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node
{
int data;
struct node* left;
struct node* right;
};

/* If target is present in tree, then prints the ancestors
and returns true, otherwise returns false. */
bool printAncestors(node *root, int target ,int a[][7])
{
/* base cases */
if (root == NULL)
	return false;

if (root->data == target)
	return true;

/* If target is present in either left or right subtree of this node,
	then print this node */
if ( printAncestors(root->left, target,a) ||
	printAncestors(root->right, target,a) )
{
	a[root->data][target]=1;
	return true;
}

/* Else return false */
return false;
}

void printAllleaf(node *root,int a[][7],node *main)
{
    if(root==NULL)
    {return;}
    else
    {
        bool g= printAncestors(main,root->data,a);
        printAllleaf(root->left,a,main);
        printAllleaf(root->right,a,main);
        
    }
    
    
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newnode(int data)
{
struct node* node = (struct node*)
					malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;

return(node);
}

/* Driver program to test above functions*/
int main()
{ int a[7][7];
for(int i=0;i<7;i++)
 { for(int j=0;j<7;j++)
    { a[i][j]=0; }    
 }

/* Construct the following binary tree
			1
			/ \
		2	 3
		/ \
	4	 5
	/
	7
*/
struct node *root = newnode(0);
root->left	 = newnode(1);
root->right	 = newnode(2);
root->left->left = newnode(3);
root->left->right = newnode(4);
root->right->left = newnode(5);
root->right->right = newnode(6);
printAllleaf(root,a,root);
for(int i=0;i<7;i++)
 { for(int j=0;j<7;j++)
    { cout<<a[i][j]<<" "; }
    cout<<"\n";
 }


getchar();
return 0;
}
