class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dumy=new ListNode();
        dumy.next=head;
        ListNode fast=dumy;
        ListNode slow=dumy;
        for(int i=1;i<=n;++i)
            fast=fast.next;
        while(fast.next!=null){
            fast=fast.next;
            slow=slow.next;
        }
        slow.next=slow.next.next;
        return dumy.next;
    }
}
