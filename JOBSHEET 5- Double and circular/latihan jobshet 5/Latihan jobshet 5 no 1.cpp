/* created_by_Serly Eka Putri_23343083 */

/// 1. Deklarasi Double Linked List
 
#include <stdio.h>  
#include <stdlib.h>  
   struct node {
    int data; 
	struct node *next; 
	struct node *back; 
};  
  
struct node *head = NULL; 
struct node *tail = NULL; 
struct node *current; 
 int main () {
   current = (struct node *) malloc (sizeof (struct node)); 
   current -> data = 1; 
   current -> next = NULL; 
   current -> back = NULL; 
 
head = tail = current; 
return 0;  
} 
