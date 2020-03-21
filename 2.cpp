/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void append(ListNode** head, int data)  
{  
    ListNode* new_node = new ListNode(); 
    ListNode *last = *head;
    new_node->val = data;  
    new_node->next = NULL;  
    if (*head == NULL)  
    {  
        *head = new_node;  
        return;  
    }  
    while (last->next != NULL)  
        last = last->next;  
    last->next = new_node;  
    return;  
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = NULL;
        
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
                append(&p1, c%10);
                    
                }

            if (tmp>0) append(&p1, tmp);
        return p1;
    }
};
