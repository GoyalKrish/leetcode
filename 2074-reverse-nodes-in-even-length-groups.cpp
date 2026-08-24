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
    ListNode* reverse(ListNode* left, int n){
        ListNode* prev = nullptr;
        ListNode* node = left;

        for(int i = 0 ; i < n ; ++i){
            ListNode* next = node->next;
            node->next = prev;
            prev = node;
            node = next;
        }
        left->next = node;
        return prev;
    }
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int currGroup = 1;
        ListNode* node = head;
        ListNode* prevGroupTail = nullptr;


        while(node){
            int size = 0;
            ListNode* groupTail = node;
            while(groupTail && size < currGroup){
                ++size;
                groupTail = groupTail->next;
            }

            ListNode* nextGroupHead = groupTail;
            
            if(size % 2 == 0){
                ListNode* newGroupHead = reverse(node
                , size);
                if(prevGroupTail) prevGroupTail->next = newGroupHead;
                else head = newGroupHead;

                prevGroupTail = node;
            }else{
                prevGroupTail = node;
                for(int i = 1 ; i < size ; ++i){
                    prevGroupTail = prevGroupTail->next;
                }
            }
            node = nextGroupHead;
            ++currGroup;
        }

        return head;
        
    }
};
