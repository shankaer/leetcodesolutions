/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {


        ListNode *slow = head , *fast = head ;

        ListNode *firstCommonNode = NULL;

        if(  head == NULL || head -> next == NULL  )return NULL ;

        while( fast != NULL ){
            slow = slow -> next ;
            fast = fast->next ;
            fast = fast != NULL ? fast->next : NULL ;
            if( fast == slow ){
                firstCommonNode = fast ;
                break ;
            }

        }

        if( firstCommonNode == NULL ){
            return firstCommonNode ;
        }
        fast = head ;
        while( fast != slow ){
            fast = fast -> next ;
            slow = slow -> next ;
        }
        return slow ;
    }
};
