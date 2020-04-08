/*
876. Middle of the Linked List

Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.
*/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        int count = 1 ;
        while(tmp->next!=NULL){
            count++;
            tmp = tmp->next;
        }
        int count2=0;
        cout<<count;
        tmp = head;
        while(count2!=count/2){
            tmp = tmp->next;
            count2++;
        }
        return tmp;
       
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
Memory Usage: 6.3 MB, less than 100.00% of C++ online submissions for Middle of the Linked List.
*/
