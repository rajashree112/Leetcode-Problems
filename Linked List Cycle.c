bool hasCycle(struct ListNode *head) {
     if(head==NULL || head->next==NULL)
        return false;
    struct ListNode *slow=head,*fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
            return true;
    }
    return false;
    
}
