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
        if(!head || !head->next || !head->next->next) return {-1,-1};
        int i = 1;
        int first = -1;
        int second = -1;
        int last = -1;
        int ans = INT_MAX;
        ListNode* prev = head;
        ListNode* node = head->next;
        ListNode* nxt = node->next;

        while(nxt){
            
            if((node->val > nxt->val && node->val > prev->val) || (node->val < nxt->val && node->val < prev->val)){
                if(first == -1){
                    first = i;
                    last = i;
                }else{
                    ans = min(ans, i - last);
                    last = i;
                }
            }

            prev = node;
            node = nxt;
            nxt = nxt->next;
            ++i;
        }   

        cout << first << second << last;

        if(first == -1 || ans == INT_MAX) return {-1,-1};
        return {ans, last - first};
    }
};