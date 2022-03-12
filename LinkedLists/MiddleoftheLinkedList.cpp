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
    ListNode* middleNode(ListNode* head) {
        // fast pointer will move 2 steps , slow will move one
        ListNode *slow = head ;
        ListNode *fast = head ;
        
        while( true ){
            
            
            ListNode *fNext = fast->next  ;
            ListNode *ffNext = ( fNext != nullptr ? fNext-> next : nullptr) ;
            
            if( fNext != nullptr && ffNext != nullptr ){  // middle of the list 
                fast = ffNext ;
                slow = slow->next ;
            }
            else if ( fNext != nullptr && ffNext == nullptr ){ // case will arise when fast is at second last node in case of even length list 
                    
                
                slow = slow -> next ; // slow takes one step , ensures second middle 
                fast = ffNext ;       // fast at last null node 
                break ;
            }
            else if( fNext == nullptr ) { // fast at last node in case odd length list we have arrived at last and slow contains the answer 
                
                break ;
                
            }
            
            
        }
        
        return slow ;
        
    }
};
