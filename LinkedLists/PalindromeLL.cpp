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
    
    bool isPalindrome(ListNode* head) {
        
        // lets start by slow and fast pointer to reverse first part of ll and get to the middle node

        ListNode *slow = head , *prev = nullptr ;
        ListNode *fast = head ;
        bool isOdd = false;

        while( fast != nullptr ){
            prev = slow ;
            slow= slow->next ;
            fast = fast!= nullptr ? fast->next : nullptr ;
            if(fast == nullptr ){
                isOdd = true ;
            }
            fast = fast!= nullptr ? fast->next : nullptr ; 
        }
        ListNode *start = head, *temp = nullptr ;
        while( start != slow ){
           
            ListNode *next = start->next ;
            start->next = temp ;
            temp = start ;
            start = next ;
        }

        if( isOdd )prev=prev->next;


        bool res = true ;
        while( prev != nullptr || slow != nullptr ){
            if( prev->val != slow->val){
                res = false ;
                break;
            }
            prev = prev->next;
            slow=slow->next ;
        }
        return res;
    }
};
