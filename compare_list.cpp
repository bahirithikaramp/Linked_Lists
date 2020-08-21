/*You’re given the pointer to the head nodes of two linked lists. Compare the data in the nodes of the linked lists to check if they are equal. The lists are equal only if they have the same number of nodes and corresponding nodes contain the same data. Either head pointer given may be null meaning that the corresponding list is empty.
Input Format
You have to complete the int CompareLists(Node* headA, Node* headB) method which takes two arguments - the heads of the two linked lists to compare. You should NOT read any input from stdin/console.
The input is handled by the code in the editor and the format is as follows: The first line contains , the number of test cases. The format for each test case is as follows:
The first line contains an integer , denoting the number of elements in the first linked list.
The next  lines contain an integer each, denoting the elements of the first linked list.
The next line contains an integer , denoting the number of elements in the second linked list.
The next  lines contain an integer each, denoting the elements of the second linked list.*/

/*Output Format
Compare the two linked lists and return 1 if the lists are equal. Otherwise, return 0. Do NOT print anything to stdout/console.
The output is handled by the code in the editor and it is as follows:
For each test case, in a new line, print  if the two lists are equal, else print .*/


// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

 
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==NULL&&head2==NULL)
        return 1;
    if((head1==NULL&&head2!=NULL)||(head2==NULL&&head1!=NULL))
        return 0;
    SinglyLinkedListNode *temp1, *temp2;
    temp1 = head1;
    temp2 = head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
            return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(temp1==NULL&&temp2==NULL)
        return true;
    return false;
}
