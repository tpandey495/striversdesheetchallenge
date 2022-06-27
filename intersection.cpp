//160. Intersection of Two Linked Lists
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      if(headA==NULL||headB==NULL){
            return NULL;
        }
        ListNode * temp1=headA;
        ListNode *temp2=headB;
    
          while(temp1!=temp2){
            if(temp1==temp2){
                return temp2;
            }
         temp1=(temp1==NULL)?headB:temp1->next;
          temp2=(temp2==NULL)?headA:temp2->next;
        }
        
       return temp1; 
    }
    
    
