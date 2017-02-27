#include<iostream>
using namespace std;

struct node{
int num;
node *next;
}*head;


void insert(int num){
if(head==NULL){
head=new node;
head->num=num;
head->next=NULL;
return;
}

node *temp = head;
while(temp->next!=NULL)
temp = temp->next;

node *end=new node;
end->num=num;
end->next=NULL;

temp->next=end;

}

void display(){
node *temp=head;
while(temp!=NULL){
cout<<temp->num<<" ";
temp=temp->next;
}
}


void reverse(node *temp){
if(temp == NULL)
return;
reverse(temp->next);
if(temp->next == NULL)
{head = temp;
return;
}
node *temp2=temp->next;
if(temp2->next==NULL)
{temp2->next = temp;
temp -> next = NULL;
}

return;

}

int main(){

insert(3);insert(4);insert(5);
display();
reverse(head);
cout<<"\n";
display();


return 0;
}
