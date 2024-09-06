/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    
    public ListNode getAhead( ListNode r , int n  ){
        
       
        while(n > 0){
            r=r.next;
            --n;
        }
        return r; 
    }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        ListNode start = head ;
        ListNode prev = null ; 
        ListNode end = getAhead(head,n - 1 ) ; // n - 1 start also counts as one
        
       
        
        while(end.next != null ){
            
            end = end.next ;
            prev = start ;
            start = start.next ;
            
        }
        
       
        if( prev == null  ){   // first node is the answer
           ListNode result = start.next;
            
           start.next = null ;
           return result ;
            
        }
        else{
            prev.next = start.next ;
            start.next = null ;
            return head ;
            
        } 
    }
}
