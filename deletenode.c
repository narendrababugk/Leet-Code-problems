#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

void display(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {


    struct ListNode *head = malloc(sizeof(struct ListNode));
    struct ListNode *node2 = malloc(sizeof(struct ListNode));
    struct ListNode *node3 = malloc(sizeof(struct ListNode));
    struct ListNode *node4 = malloc(sizeof(struct ListNode));


    head->val = 4;
    node2->val = 5;
    node3->val = 1;
    node4->val = 9;

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    printf("Before deletion:\n");
    display(head);

    deleteNode(node2);

    printf("After deletion:\n");
    display(head);

    return 0;
}