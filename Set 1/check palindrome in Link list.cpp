#include <stdio.h>
#include <iostream>
using namespace std;

struct node
{
    char data;
    node *next;
};

// Initial parameters to this function are &head and head
bool isPalindromeUtil(node *left, node *right)
{ static node *headright= left;
   /* stop recursion when right becomes NULL */
   if (right == NULL)
      return true;

   /* If sub-list is not palindrome then no need to
       check for current left and right, return false */
   bool isp = isPalindromeUtil(left, right->next);
   if (isp == false)
      return false;

   /* Check values at current left and right */
   cout<<(headright)->data<<" " <<(right)->data<<"\n";
   bool isp1 = (right->data == (headright)->data);

   /* Move left to next node */
  headright = headright->next;
   return isp1;
}

// A wrapper over isPalindromeUtil()
bool isPalindrome(node *head)
{
   isPalindromeUtil(head, head);
}

/* Drier program to test above function*/
int main()
{
    /* Start with the empty list */
    node* head = NULL;
    char str[] = "abagaba";
    int i;
    node * temp=NULL;
    for (i = 0; str[i] != '\0'; i++)
    { node* nodelist=new node;
      nodelist->data=str[i];
      nodelist->next=NULL;
      if(!temp)
      {temp=nodelist;
       head=temp;
      }
      else
      {
          temp->next=nodelist;
          temp=nodelist;
          
      }
   }
   
    if(isPalindrome(head))
    cout<<"Is Palindrome\n\n";
    else
    cout<<"Not Palindrome\n\n";

    return 0;
}