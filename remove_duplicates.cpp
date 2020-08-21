/**
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode*cur = A;
    while(cur->next!=NULL)
    {
        if(cur->val==cur->next->val)
        {
            ListNode*t = cur->next->next;
            free(cur->next);
            cur->next = t;
        }
        else
            cur = cur->next;
    }
    return A;
}
