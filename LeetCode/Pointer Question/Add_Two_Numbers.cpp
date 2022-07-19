class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(-1); //answer to return
        ListNode *curr = result;  //the pointer to travel (result)
        
        int carry = 0;
        while(l1 != NULL||l2 != NULL){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            curr->next = new ListNode(sum%10);
            carry = sum/10;
            curr = curr->next;
        }
        if(carry == 1){
            curr->next = new ListNode(1);
        }
        return result->next;
    }
};
