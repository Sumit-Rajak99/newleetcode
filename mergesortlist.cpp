class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*, vector<ListNode*>, 
            bool(*)(ListNode*, ListNode*)> pq(
            [](ListNode* a, ListNode* b) {
                return a->val > b->val;
            }
        );

        // Push head of each list
        for (auto node : lists) {
            if (node) pq.push(node);
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!pq.empty()) {
            ListNode* top = pq.top();
            pq.pop();

            tail->next = top;
            tail = tail->next;

            if (top->next) {
                pq.push(top->next);
            }
        }

        return dummy.next;
    }
};
