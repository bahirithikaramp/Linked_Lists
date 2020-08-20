/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 *
 * typedef struct ListNode listnode;
 *
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list
 *
 * @Output head pointer of list.
 */
listnode* detectCycle(listnode* A) {
    int loop = 0;
    listnode *slow,*fast;
    slow = fast = A;
    while(fast&&fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            loop+=1;
            break;
        }
    }
    if(loop)
    {
        slow = A;
        while(slow!=fast)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
    return NULL;
}
