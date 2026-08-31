/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> loc;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        ListNode* temp3 = temp2->next;
        int count  = 2;
        while () {
            if ((temp1->val > temp2->val && temp3->val > temp2->val) ||
                (temp1->val < temp2->val && temp3->val < temp2->val)) {
                    temp = temp->next;
                    temp = temp->next;
            }

        }
    }
};