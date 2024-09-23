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
    ListNode *getNthNode ( ListNode *root , int k  ){

        while( k > 0 ){
            root=root -> next ;
            k--;
        }
        return root ;
    }
    ListNode* rotateRight(ListNode* head, int k) {

        int n = 0 ;
        ListNode *start = head ;
        while(start != nullptr ){
            start = start ->next ;
            n++;
        }
        if( n == 0 )return nullptr ;
       

        k = k % n ;
        if( n == 1 || k == 0  )return head ;

        ListNode *kthNode = getNthNode(head , k - 1  );
        ListNode *prev = nullptr ;
        start = head ;
        while( kthNode -> next != nullptr ){
            prev=start;
            start = start->next ;
            kthNode = kthNode -> next ;
        }

        kthNode->next = head ;
        prev->next = nullptr ;
        
        return start ;
    }
};
