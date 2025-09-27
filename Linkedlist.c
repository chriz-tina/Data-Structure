#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
} *temp, *ptr, *ptr1, *ptr2, *head;
int main() {
int ch, item, k;

head = NULL;
do {
printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4.
Delete from beginning\n5. Delete from end\n6. Delete any position\n7.
Display\n");
printf("Enter the choice: ");
scanf("%d", &ch);
switch(ch) {
case 1: // Insert at the beginning
printf("Enter item: ");
scanf("%d", &item);
temp = (struct node*) malloc(sizeof(struct node));
if(temp == NULL) {
printf("Memory allocation failed\n");
} else {
temp->data = item;
temp->link = head; // Point new node to the current head
head = temp; // Make the new node the head of the list
}
break;

case 2: // Insert at the end
printf("Enter item: ");
scanf("%d", &item);
temp = (struct node*) malloc(sizeof(struct node));
if(temp == NULL) {
printf("Memory allocation failed\n");
} else {
temp->data = item;
temp->link = NULL; // Last node points to NULL
if(head == NULL) { // If list is empty, new node becomes the head
head = temp;
} else {
ptr = head;
while(ptr->link != NULL) {
ptr = ptr->link;
}
ptr->link = temp; // Link the last node to the new node
}
}
break;
case 3: // Insert at specific position
printf("Enter item: ");
scanf("%d", &item);
printf("Enter the key value: ");
scanf("%d", &k);
temp = (struct node*) malloc(sizeof(struct node));
if(temp == NULL) {
printf("Memory allocation failed\n");
} else {
ptr = head;
while(ptr != NULL && ptr->data != k) {
ptr = ptr->link;
}
if(ptr == NULL) {
printf("Key value not found\n");
} else {
temp->data = item;

temp->link = ptr->link;
ptr->link = temp; // Insert new node after the node with key
value
}
}
break;
case 4: // Delete from beginning
if(head == NULL) {
printf("The list is empty\n");
} else {
ptr = head;
head = head->link; // Move head to the next node
printf("Deleted: %d\n", ptr->data);
free(ptr); // Free the memory of the deleted node
}
break;
case 5: // Delete from end
if(head == NULL) {
printf("The list is empty\n");
} else {
ptr1 = head;
ptr2 = ptr1->link;
if(ptr2 == NULL) { // If there's only one node
printf("Deleted: %d\n", ptr1->data);
free(ptr1);
head = NULL;
} else {
while(ptr2->link != NULL) {
ptr1 = ptr2;
ptr2 = ptr2->link;
}
printf("Deleted: %d\n", ptr2->data);
ptr1->link = NULL; // Remove the last node from the list
free(ptr2); // Free memory
}
}
break;

case 6: // Delete at a specific position (by key)
printf("Enter the key value: ");
scanf("%d", &k);
if(head == NULL) {
printf("The list is empty\n");
} else {
ptr1 = head;
ptr2 = ptr1->link;
while(ptr2 != NULL && ptr2->data != k) {
ptr1 = ptr2;
ptr2 = ptr2->link;
}
if(ptr2 == NULL) {
printf("Key not found\n");
} else {
printf("Deleted: %d\n", ptr2->data);
ptr1->link = ptr2->link; // Remove ptr2 from the list
free(ptr2); // Free memory of the deleted node
}
}
break;
case 7: // Display the list
ptr = head;
if(ptr == NULL) {
printf("The list is empty\n");
} else {
printf("List contents: ");
while(ptr != NULL) {
printf("%d ", ptr->data);
ptr = ptr->link;
}
printf("\n");
}
break;
default:
printf("Invalid choice\n");
}

} while(ch != 5); // Exit when user chooses option 5 (Delete from end)
return 0;
}
