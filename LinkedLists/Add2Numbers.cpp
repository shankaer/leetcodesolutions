/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *sum = nullptr ;
        ListNode *head = nullptr;
        int carry = 0 ;
        while(l1 != nullptr || l2 !=nullptr ){
            
            int digit1 = l1 != nullptr ? l1->val : 0 ;
            int digit2 = l2 != nullptr ? l2->val : 0 ;
            
            int _sum = carry + digit1 + digit2 ;
            
            if( _sum > 9){carry = _sum /10 ; _sum = _sum % 10 ;}
            else carry = 0 ;
            
            ListNode *node = new ListNode() ;
            node->val = _sum ;
            node->next = nullptr ;
            if( sum == nullptr ){
                head = node ;
                sum = node ;
            }
            else {
                sum->next = node ;
                sum = node ;
            }
            
            if( l1 != nullptr )l1=l1->next;
            if( l2 != nullptr )l2=l2->next;
             
        }
        if(carry != 0 ){
            ListNode *extra = new ListNode() ;
            extra->val = carry ;
            extra->next = nullptr ;
            sum -> next = extra ;
            sum = extra ;
        }
        return head ;
      
    }
};
