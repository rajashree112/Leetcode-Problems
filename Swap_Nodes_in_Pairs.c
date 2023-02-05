struct ListNode* swapPairs(struct ListNode* head)
{
  if(!head || !head->next)
    return head;
 struct ListNode *f = head;
 struct ListNode *s = head->next;
 struct ListNode *t=swapPairs(s->next);
    s->next=f;
    f->next=t;
    return s;
}
