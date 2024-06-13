/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || k == 0) 
    return head;
    int count = 1;
    struct ListNode* q1 = head;
    while (q1->next != NULL) {
        count++;
        q1 = q1->next;
    }
    k=k%count;
    if (k==0) 
    return head; 
    struct ListNode* q2 = head;
    int i=0,j=count-k-1;
    while(i<j) {
        q2 = q2->next;
        i++;
    }
    q1->next = head;
    head = q2->next;
    q2->next = NULL;
    return head;
}
