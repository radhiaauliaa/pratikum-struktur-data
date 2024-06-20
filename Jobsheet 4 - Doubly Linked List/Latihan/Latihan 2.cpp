//created by Radhia Aulia Nisa
#include <stdio.h> 
#include <stdlib.h> 
 
// Structure of the node  
struct Node {     
	int data; 
    struct Node *next; // Pointer to next node     
	struct Node *prev; // Pointer to previous node 
}; 

void push(Node** head_ref, int new_data)   
{   
    /* 1. allocate node */ 
    Node* new_node = new Node();   
   
    /* 2. put in the data */     
	new_node->data = new_data;   
   
    /* 3. Make next of new node as head and previous as NULL */     
	new_node->next = (*head_ref);       
	new_node->prev = NULL;   
   
    /* 4. change prev of head node to new node */     
	if ((*head_ref) != NULL)   
        (*head_ref)->prev = new_node;   
   
    /* 5. move the head to point to the new node */ 
    (*head_ref) = new_node;   
}  

void insertAfter(struct Node* prev_node, int new_data)  
{  
    /*1. check if the given prev_node is NULL */     
	if (prev_node == NULL) {  
        printf("the given previous node cannot be NULL");          
		return;  
    }  
  /* 2. allocate new node */ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  
    
    /* 3. put in the data  */     
	new_node->data = new_data;  
	
    /* 4. Make next of new node as next of prev_node */     
	new_node->next = prev_node->next;  
	
    /* 5. Make the next of prev_node as new_node */     
	prev_node->next = new_node;  
	
    /* 6. Make prev_node as previous of new_node */     
	new_node->prev = prev_node;  
	
    /* 7. Change previous of new_node's next node */     
	if (new_node->next != NULL)          
	new_node->next->prev = new_node;  
}  

void printList(struct Node* node)   
{   
    struct Node* last;   
    printf("\nTraversal in forward direction \n");  
	     
	while (node != NULL) {           
	printf(" %d ", node->data);           
	last = node;           
	node = node->next;   
    }   
    
  printf("\nTraversal in reverse direction \n");       
  while (last != NULL) {           
  printf(" %d ", last->data);           
  last = last->prev;   
    }   
} 

int main()   
{   
    /* Start with the empty list */     
	struct Node* head = NULL;       
	push(&head, 6);       
	push(&head, 5);       
	push(&head, 2);  
	    
	insertAfter(head->next, 5);    
	   
	printf("Created DLL is: ");       
	printList(head);       
	getchar();   
	    
	return 0;   
}   
