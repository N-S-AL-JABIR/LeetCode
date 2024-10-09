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
    void delete_position(ListNode* head,int x) 
    {
        ListNode* tmp=head;
        for(int i = 1;i < x;i++)
        {
            tmp=tmp->next;  
        }
        tmp->next=tmp->next->next;
    }
    int size(ListNode *head)
    {
       ListNode * tmp=head;
       int c=0;
       while(tmp!=NULL)
       {
        c++;
        tmp=tmp->next;
       } 
       return c;
    }
    ListNode* removeNthFromEnd(ListNode* &head,int n) 
    {
        if(head==NULL )
            {
                return head;
            }
        int x= size(head);
        if(n > x)
        {
            return head;
        }
        x=x-n;
        if(x==0)
        {
            ListNode* dnode=head;
            head=head->next;
            delete dnode;
        }
        else if (x>0)
        {
        delete_position(head,x);
        }

        return head;
    }
};