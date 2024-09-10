/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*  STACK BASED APPROACH 


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        stack< ListNode*> s1 ;
        stack< ListNode*> s2 ;
        ListNode *startA = headA, *startB = headB;
        
        while(headA != NULL ){
            s1.push(headA);
            headA=headA->next;
        }
        while(headB != NULL ){
            s2.push(headB);
            headB=headB->next;
        }
        
        
        bool isCommonNode = true ;
        
        ListNode *commonNode = NULL ;
        
        while(isCommonNode && !s1.empty() && !s2.empty()){
            
            ListNode *topA =   s1.top();
            ListNode *topB = s2.top() ;
            
            if( topA != topB ) {
                isCommonNode = false ;
               
            }
            else {
                 commonNode = topA;
            }
            s1.pop(); s2.pop();
        }
       
        return commonNode;
        
    }
};

*/ 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
       
        ListNode *startA = headA, *startB = headB;
        int l1 = 0 , l2 = 0 ;
        
        while(headA != NULL ){
           ++l1;
            headA=headA->next;
        }
        while(headB != NULL ){
            ++l2;
            headB=headB->next;
        }

        int skippedSteps = ( l2 > l1 ) ? l2 - l1 : l1 - l2 ;


        if( l1 > l2 ){
            while(skippedSteps-- )startA=startA->next ;
        }
        else if( l2> l1 ){
            while(skippedSteps-- )startB=startB->next ;
        }

        ListNode *commonNode = NULL ;
        while( startA != NULL && startB != NULL ){

            if( startA == startB){
                commonNode = startA ;
                break ;
            }

            startA = startA->next ;
            startB = startB->next ;
        }
        
        
       
        return commonNode;
        
    }
};
