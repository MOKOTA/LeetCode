/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *oddNode,*evenNode,*tempNode;
        if(head)
        {
            oddNode = head;
            evenNode = head->next;
            tempNode = evenNode;
            while(oddNode->next!=NULL &&evenNode->next!=NULL)
            {
                oddNode->next = evenNode->next;
                oddNode = oddNode->next;
                evenNode->next = oddNode->next;
                evenNode= evenNode->next;
            }
            oddNode->next = tempNode;
        }
        return head;
}
};
