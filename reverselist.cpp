	//206	Reverse Linked List
    
    ListNode* reverseList(ListNode* head) {
      ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr){
            ListNode *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
             }
        return prev;
    }