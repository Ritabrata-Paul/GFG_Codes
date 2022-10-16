class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head -> next == NULL){
    
            return head;

        }

        ListNode *temp = head;

        while(temp -> next -> next != NULL){

            temp = temp -> next;

        }

        ListNode *nextNode =  temp -> next;

        nextNode -> next = head;

        temp -> next = NULL;

        head = nextNode;

        return head;
    }
};