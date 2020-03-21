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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* new_node = NULL; 
        ListNode** new_node1 = &new_node; 
        
         int c=0;
        int tmp_l1=0;
        int tmp_l2=0;
        int tmp = 0;
        while(l1!=NULL || l2!=NULL ){
                if(l1!=NULL){
                    tmp_l1 = l1->val;
                    l1 = l1->next;
                } else tmp_l1=0;
            
                if(l2!=NULL){
                    tmp_l2 = l2->val;
                    l2 = l2->next;
                } else tmp_l2=0;
                

                c = tmp_l1+tmp_l2+tmp;
                tmp = c/10;
                (*new_node1)= new ListNode(c%10);
                new_node1=&((*new_node1)->next);
                    
                }

            if (tmp>0) (*new_node1)= new ListNode(tmp);
        return new_node;
    }
};
