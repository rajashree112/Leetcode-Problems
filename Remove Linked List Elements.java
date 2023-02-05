class Solution {
    public ListNode removeElements(ListNode head, int val) 
    {
        while(head!=null && head.val==val)
        {
            head=head.next;
        }
        ListNode currNode=head;
        while(currNode!=null && currNode.next!=null)
        {
            if(currNode.next.val==val)
            {
                currNode.next=currNode.next.next;
            }
            else
            {
                currNode=currNode.next;
            }
        }
        return head;
    }
}
