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
        
        
        int l1 = 0 , l2 = 0  ;
        ListNode *p = headA ;
        ListNode* q = headB ;
        while ( p != NULL )p=p->next,++l1 ;
        while ( q != NULL )q=q->next,++l2 ;
        
        
        
        int skippedItems = max(l1,l2) - min(l1,l2) ;
        
        pair<ListNode* , ListNode*> startNodes = (l2>=l1)?getStartingNodes( headA,headB,skippedItems): getStartingNodes( headB,headA,skippedItems) ;
        
        ListNode *r = startNodes.first , *s = startNodes.second , *res = NULL ;
        
        while( r!= NULL ) {
            
            if( r == s ){
                res=r ;
                break ;
            }
            
            r=r->next ;
            s=s->next ;
        }
            
        return res ; 
            
        }
        
        
        
        
    pair<ListNode* , ListNode*> getStartingNodes( ListNode* smallHead , ListNode *longHead , int skippedItems){
        
        
        while( skippedItems-- )longHead=longHead->next  ;
            
        return make_pair(smallHead,longHead) ;
        
        
    }
    
};
