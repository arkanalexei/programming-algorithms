/*PROBLEM STATEMENT
To check if a given linked list is pallindrome or not
Example:  1->2->3->2->1->NULL  (this is a pallindrome linked list)
          1->2->3->4->1->NULL  (this is not a pallindrome linked list)
*/

//function to find the mid of linked list

Node *midpt(Node* head){
    Node *slow=head;
    Node *fast=head;
    while(fast != NULL && fast->next !=NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

//function to reverse th linked list from mid to last node

Node *reverse(Node* head){
     Node *cur=head;
    Node* prev=NULL;
    while(cur!=NULL){
        Node* temp=cur->next;
         cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
}

//main function that checks if the list is pallindrome or not

bool isPalindrome(Node *head)
{
    if(head==NULL || head->next==NULL) return true;
    Node *mid=midpt(head);
    Node *last=reverse(mid);
    while(last!=NULL){
        if(head->data!=last->data) return false;
        last=last->next;
        head=head->next;
    }
    return true;
}
