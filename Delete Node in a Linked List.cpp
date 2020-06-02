//Delete a node of linked list without the head node give.

//https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3348/

//Delete Node in a Linked List

//Time complexityy O(1)


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
    void deleteNode(ListNode* node) 
    {
        ListNode *temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        *temp = NULL;
    }
};
