/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){

}

#include <math.h>
int getDecimalValue(struct ListNode* head){
    struct ListNode *p = head;
    int n = 0;
    
    while (p != NULL)
    {
        n++;
        p = p -> next;
    }
    int *arr = (int *)malloc(nsizeof(int));
    p = head;
    for (int i = 0; i < n; i++)
    {
        arr[i] = p -> val;
        p = p -> next;
    }
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num = num + pow(2, i) * arr[n - i - 1];
    }
    return num;
}