
//234	Palindrome Linked List

bool isPalindrome(ListNode* head) {
    if(!head || !head->next) return true;
    ListNode* slow = head;
    ListNode* fast= head;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* reversed= reverseList(slow);
    while(head && reversed){
        if(head->val != reversed->val) return false;
        head = head->next;
        reversed = reversed->next;
    }
    return true;
}

ListNode* reverseList(ListNode* head) {
    ListNode* reversed = NULL;
    while(head){
        ListNode* temp = new ListNode(head->val);
        if(!reversed) reversed = temp;
        else{
            temp->next = reversed;
            reversed = temp;
        }
        head = head->next;
    }
    return reversed;
}