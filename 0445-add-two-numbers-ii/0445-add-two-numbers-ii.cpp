class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        stack<int> st1, st2, st3;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        // Put l1 into stack
        while (temp1 != NULL) {
            st1.push(temp1->val);
            temp1 = temp1->next;
        }

        // Put l2 into stack
        while (temp2 != NULL) {
            st2.push(temp2->val);
            temp2 = temp2->next;
        }

        int carry = 0;

        // Add while both stacks have elements
        while (!st1.empty() && !st2.empty()) {

            int sum = st1.top() + st2.top() + carry;

            st3.push(sum % 10);
            carry = sum / 10;

            st1.pop();
            st2.pop();
        }

        // Remaining l1
        while (!st1.empty()) {

            int sum = st1.top() + carry;

            st3.push(sum % 10);
            carry = sum / 10;

            st1.pop();
        }

        // Remaining l2
        while (!st2.empty()) {

            int sum = st2.top() + carry;

            st3.push(sum % 10);
            carry = sum / 10;

            st2.pop();
        }

        // Remaining carry
        if (carry != 0) {
            st3.push(carry);
        }


        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (!st3.empty()) {

            tail->next = new ListNode(st3.top());
            tail = tail->next;

            st3.pop();
        }

        return dummy->next;
    }
};