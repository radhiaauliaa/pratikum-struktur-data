//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node {
  char no_plat[10];
  char merk[20];
  char nama_pemilik[20];
  struct Node* prev;
  struct Node* next;
} Node;

Node* create_node(char* no_plat, char* merk, char* nama_pemilik) {
  Node* new_node = (Node*)malloc(sizeof(Node));
  strcpy(new_node->no_plat, no_plat);
  strcpy(new_node->merk, merk);
  strcpy(new_node->nama_pemilik, nama_pemilik);
  new_node->prev = NULL;
  new_node->next = NULL;
  return new_node;
}

void add_node(Node** head, Node* new_node) {
  if (*head == NULL) {
    *head = new_node;
  } else {
    Node* temp = *head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
  }
}

Node* remove_node(Node** head, char* no_plat) {
  Node* temp = *head;
  while (temp != NULL) {
    if (strcmp(temp->no_plat, no_plat) == 0) {
      if (temp->prev != NULL) {
        temp->prev->next = temp->next;
      } else {
        *head = temp->next;
      }
      if (temp->next != NULL) {
        temp->next->prev = temp->prev;
      }
      temp->prev = NULL;
      temp->next = NULL;
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

void print_queue(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    printf("No plat: %s, Merk: %s, Nama pemilik: %s\n", temp->no_plat, temp->merk, temp->nama_pemilik);
    temp = temp->next;
  }
}

int main() {
  Node* head = NULL;
  add_node(&head, create_node("AA1234", "Toyota", "Abdul"));
  add_node(&head, create_node("BB5678", "Honda", "Malik"));
  add_node(&head, create_node("CC9123", "Ford", "Jaenuddin"));
  print_queue(head);
  Node* removed = remove_node(&head, "BB5678");
  if (removed != NULL) {
    printf("\nSuccessfully removed node: No plat: %s, Merk: %s, Nama pemilik: %s\n", removed->no_plat, removed->merk, removed->nama_pemilik);
  }
  print_queue(head);
  return 0;
}
