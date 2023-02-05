class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head==null||k==1)
            return head;
        ListNode dummy=new ListNode();
        dummy.next=head;
        ListNode current=dummy;
        ListNode prev=dummy;
        ListNode Next=dummy;
        int count=0;
        while(current.next!=null){
            current=current.next;
            count++;
        }
        while(count>=k){
            current=prev.next;
            Next=current.next;
            for(int i=1;i<k;i++){
                current.next=Next.next;
                Next.next=prev.next;
                prev.next=Next;
                Next=current.next;
            }
            prev=current;
            count=count-k;
        }
        return dummy.next;
    }
}
