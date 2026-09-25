#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    
    struct ListNode *head = malloc(sizeof(struct ListNode));
    struct ListNode *node2 = malloc(sizeof(struct ListNode));
    struct ListNode *node3 = malloc(sizeof(struct ListNode));
    struct ListNode *node4 = malloc(sizeof(struct ListNode));
    struct ListNode *node5 = malloc(sizeof(struct ListNode));

    
    head->val = 1;
    node2->val = 2;
    node3->val = 3;
    node4->val = 4;
    node5->val = 5;


    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

   
    struct ListNode *middle = middleNode(head);

    printf("Middle node = %d\n", middle->val);

    return 0;
}