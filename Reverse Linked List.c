struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *t=NULL;
    while(head!=NULL){
        struct ListNode *n=head->next;
        head->next=t;
        t=head;
        head=n;
    }
    return t;
}
