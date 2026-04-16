#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
};

struct node *head = NULL;

// Insert at end
void insert(int data) {
struct node *newNode, *temp;
newNode = (struct node*)malloc(sizeof(struct node));
newNode->data = data;

if (head == NULL) {
head = newNode;
newNode->next = head;
} else {
temp = head;
while (temp->next != head)
temp = temp->next;

temp->next = newNode;
newNode->next = head;
}
}

// Display list
void display() {
struct node *temp;
if (head == NULL) {
printf("List is empty\n");
return;
}

temp = head;
do {
printf("%d -> ", temp->data);
temp = temp->next;
} while (temp != head);

printf("(head)\n");
}

int main() {
insert(10);
insert(20);
insert(30);

display();

return 0;
}
