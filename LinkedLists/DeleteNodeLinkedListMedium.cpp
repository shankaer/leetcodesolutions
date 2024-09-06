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
    void deleteNode(ListNode* node) {
        
      
//         ListNode *successor = node -> next  ;
//         ListNode *prev = NULL ;
      
//         while( successor != NULL ){
//             node->val = successor->val ;
//             prev = node ;
//             node = successor ;
//             successor = successor->next ;     
            
//         }
//         prev->next = NULL ;
        
         // Overwrite data of next node on current node.
        node->val = node->next->val;
        // Make current node point to next of next node.
        node->next = node->next->next;
       
        
    }
};
